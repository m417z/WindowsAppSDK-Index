# WindowsAppSDK-Index

An index of [Windows App
SDK](https://www.nuget.org/packages/Microsoft.WindowsAppSDK) (WinUI 3) and
[Microsoft.UI.Xaml](https://www.nuget.org/packages/Microsoft.UI.Xaml) (WinUI 2)
NuGet packages. Primary textual files are indexed, including headers, idl files,
winmd files converted to idl, and headers generated from these idl files.

## Motivation

The reason this repository was created is to have all interface GUIDs indexed
and easily accessible on GitHub.

For example, you have this GUID:

`{553AF92C-1381-51D6-BEE0-F34BEB042EA8}`

To find out what interface it is, you can [search for it in this
repository](https://github.com/search?q=repo%3Am417z%2FWindowsAppSDK-Index+553AF92C-1381-51D6-BEE0-F34BEB042EA8&type=code).

Then you'll see that it's `IDesktopWindowXamlSource`. You then might want to
find out which other versions of `IDesktopWindowXamlSource` are there. Just
[make another search for `"interface IDesktopWindowXamlSource :
IInspectable"`](https://github.com/search?q=repo%3Am417z%2FWindowsAppSDK-Index+%22interface+IDesktopWindowXamlSource+%3A+IInspectable%22&type=code).

For a more powerful experience, you can use [the github.dev
version](https://github.dev/m417z/WindowsAppSDK-Index) or, of course, clone the
repository.

In addition, generated headers can be used to quickly copy interfaces when
needed.
