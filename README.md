# time

A lightweight time library and datatype for Carp.

## Installation

```clojure
(load "git@github.com:carpentry-org/time@0.4.0")
```

## Usage

This library exports two important datatypes, `Datetime` and `Duration`.
`Datetime` is meant to be a low friction datatype; this means that it should
be relatively easy to create, modify, and convert to other types!

`Duration` represents a duration on the scale of seconds to weeks. You can add
or subtract one from a `Datetime`, measure the span between two `Datetime`s,
combine and scale deltas, compare them, and render them in a human-readable
form.

### Formatting

Format a `Datetime` into a string using `strftime`:

```clojure
(defn main []
  (println*
    &(Datetime.strftime
      &(Duration.sub &(Datetime.now) &(Duration.days 2))
      "%Y-%m-%d %I:%M:%S.%n %p %z")))
```

### Parsing

Parse a string into a `Datetime` using `strptime`:

```clojure
(defn main []
  (match (Datetime.strptime "2024-03-15 14:30:00" "%Y-%m-%d %H:%M:%S")
    (Result.Success dt) (println* &(Datetime.isoformat &dt))
    (Result.Error e) (println* &e)))
```

`strptime` returns a `(Result Datetime String)`. On failure, the error
contains a message describing what went wrong.

### Format specifiers

Both `strftime` and `strptime` support the same set of format specifiers,
mirroring [the C formatting API](http://www.cplusplus.com/reference/ctime/strftime/):

| Specifier | Description                    | Example          |
|-----------|--------------------------------|------------------|
| `%Y`      | 4-digit year                   | `2024`           |
| `%y`      | 2-digit year                   | `24`             |
| `%m`      | Month as zero-padded number    | `03`             |
| `%b`      | Abbreviated month name         | `Mar`            |
| `%B`      | Full month name                | `March`          |
| `%d`      | Day as zero-padded number      | `15`             |
| `%H`      | Hour (24h) as zero-padded number | `14`           |
| `%I`      | Hour (12h) as zero-padded number | `02`           |
| `%p`      | AM or PM                       | `PM`             |
| `%M`      | Minute as zero-padded number   | `30`             |
| `%S`      | Second as zero-padded number   | `45`             |
| `%n`      | Nanoseconds (9 digits)         | `123456789`      |
| `%a`      | Abbreviated weekday name       | `Fri`            |
| `%A`      | Full weekday name              | `Friday`         |
| `%w`      | Weekday as number (0=Mon)      | `4`              |
| `%j`      | Day of year (3 digits)         | `075`            |
| `%U`      | Week number (Sunday start)     | `11`             |
| `%W`      | Week number (Monday start)     | `11`             |
| `%V`      | ISO 8601 week number           | `11`             |
| `%G`      | ISO 8601 week-based year       | `2024`           |
| `%u`      | ISO weekday (1=Mon, 7=Sun)     | `5`              |
| `%z`      | UTC offset                     | `+0530`          |
| `%Z`      | Timezone name                  | `UTC`            |
| `%c`      | Locale datetime                | `Fri Mar 15 14:30:45 2024` |
| `%x`      | ISO date                       | `2024-03-15`     |
| `%X`      | ISO time                       | `14:30:45`       |
| `%F`      | ISO date (`%Y-%m-%d`)          | `2024-03-15`     |
| `%T`      | 24-hour time (`%H:%M:%S`)      | `14:30:45`       |
| `%R`      | 24-hour time (`%H:%M`)         | `14:30`          |
| `%D`      | US date (`%m/%d/%y`)           | `03/15/24`       |
| `%r`      | 12-hour time (`%I:%M:%S %p`)   | `02:30:45 PM`    |
| `%h`      | Abbreviated month (alias `%b`) | `Mar`            |
| `%%`      | Literal `%`                    | `%`              |

When parsing with `strptime`, specifiers `%a`, `%A`, `%w`, `%j`, `%U`, `%W`,
`%V`, `%G`, and `%u` are consumed from the input but discarded, since they
represent derived values that are fully determined by the date.

### Durations

A `Duration` is a duration you can build from seconds up to weeks, shift a
`Datetime` by, or compute from the span between two `Datetime`s:

```clojure
(defn main []
  (let-do [span (Duration.between
                  &(Datetime.date 2024 3 15)
                  &(Datetime.date 2024 3 10))]
    (println* &(Duration.str &span))                       ; => 5d
    (println* &(Duration.str &(Duration.scale &span 2))))) ; => 10d
```

Deltas can be combined (`plus`, `minus`, `negate`, `scale`/`mul`), compared
(`=`, `<`, `>`), and inspected (`zero?`, `pos?`, `neg?`). The total-unit
accessors `to-seconds`, `to-minutes`, `to-hours`, and `to-days` return whole
units, truncated toward zero. `str` renders a delta like `1d 2h 3m 4s`, omitting
zero components and prefixing negatives with `-`.

## Testing

```
carp -x test/time.carp
```

You can find the API documentation [online](https://veitheller.de/time/)!

<hr/>

Have fun!
