# sparrow - A C++ library

The `sparrow` C++ library provides <SUMMARY-OF-FUNCTIONALITY>.


## Usage

To start using `sparrow` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: sparrow ^<VERSION>
```

Then import the library in your `buildfile`:

```
import libs = sparrow%lib{<TARGET>}
```


## Importable targets

This package provides the following importable targets:

```
lib{<TARGET>}
```

<DESCRIPTION-OF-IMPORTABLE-TARGETS>


## Configuration variables

This package provides the following configuration variables:

```
[bool] config.sparrow.<VARIABLE> ?= false
```

<DESCRIPTION-OF-CONFIG-VARIABLES>
