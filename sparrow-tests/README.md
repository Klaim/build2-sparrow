# sparrow-tests - An executable

The `sparrow-tests` executable is a <SUMMARY-OF-FUNCTIONALITY>.

Note that the `sparrow-tests` executable in this package provides `build2` metadata.


## Usage

To start using `sparrow-tests` in your project, add the following build-time
`depends` value to your `manifest`, adjusting the version constraint as
appropriate:

```
depends: * sparrow-tests ^<VERSION>
```

Then import the executable in your `buildfile`:

```
import! [metadata] <TARGET> = sparrow-tests%exe{<TARGET>}
```


## Importable targets

This package provides the following importable targets:

```
exe{<TARGET>}
```

<DESCRIPTION-OF-IMPORTABLE-TARGETS>


## Configuration variables

This package provides the following configuration variables:

```
[bool] config.sparrow_tests.<VARIABLE> ?= false
```

<DESCRIPTION-OF-CONFIG-VARIABLES>
