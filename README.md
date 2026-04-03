# time

A lightweight time library and datatype for Carp.

## Installation

```clojure
(load "git@github.com:carpentry-org/time@0.2.0")
```

## Usage

This library exports two important datatypes, `Datetime` and `Timedelta`.
`Datetime` is meant to be a low friction datatype; this means that it should
be relatively easy to create, modify, and convert to other types!

`Timedelta` is used to add and subtract anything on the scale of  seconds to
weeks from those times.

### Formatting

Format a `Datetime` into a string using `strftime`:

```clojure
(defn main []
  (println*
    &(Datetime.strftime
      &(Timedelta.sub &(Datetime.now) &(Timedelta.days 2))
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
| `%z`      | UTC offset                     | `+0530`          |
| `%Z`      | Timezone name                  | `UTC`            |
| `%c`      | Locale datetime                | `Fri Mar 15 14:30:45 2024` |
| `%x`      | ISO date                       | `2024-03-15`     |
| `%X`      | ISO time                       | `14:30:45`       |
| `%%`      | Literal `%`                    | `%`              |

When parsing with `strptime`, specifiers `%a`, `%A`, `%w`, `%j`, `%U`, and
`%W` are consumed from the input but discarded, since they represent derived
values that are fully determined by the date.

## Testing

```
carp -x test/time.carp
```

You can find the API documentation [online](https://veitheller.de/time/)!

<hr/>

Have fun!
