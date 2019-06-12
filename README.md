# time

A lightweight time library and datatype for Carp.

## Installation

```clojure
(load "git@github.com:carpentry-org/time.carp@0.0.2")
```

## Usage

This library exports one important datatype, `Datetime`. It is meant to be a low
friction datatype; this means that it should be relatively easy to create,
modify, and convert to other types!

```clojure
(load "git@github.com:carpentry-org/time.carp@0.0.2")

(defn main []
  (println* &(Datetime.strftime &(Datetime.now) "%Y-%m-%d %I:%M:%S.%n %p %z")))
```

You can find the API documentation [online](https://veitheller.de/time/)!

<hr/>

Have fun!
