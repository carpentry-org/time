# time

A lightweight time library and datatype for Carp.

## Installation

```clojure
(load "git@github.com:carpentry-org/time@0.1.0")
```

## Usage

This library exports two important datatypes, `Datetime` and `Timedelta`.
`Datetime` is meant to be a low friction datatype; this means that it should
be relatively easy to create, modify, and convert to other types!

`Timedelta` is used to add and subtract anything on the scale of  seconds to
weeks from those times.

```clojure
(load "git@github.com:carpentry-org/time@0.1.0")

(defn main []
  (println*
    &(Datetime.strftime
      &(Timedelta.sub &(Datetime.now) &(Timedelta.days 2))
      "%Y-%m-%d %I:%M:%S.%n %p %z")))
```

You can find the API documentation [online](https://veitheller.de/time/)!

<hr/>

Have fun!
