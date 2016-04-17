/////////////////////////////////////////////////////////////////////////////
// Name:        wx/itemattr.h
// Purpose:     wxItemAttr documentation
// Author:      Vadim Zeitlin
// Copyright:   (c) 2016 Vadim Zeitlin <vadim@wxwidgets.org>
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

/**
    @class wxItemAttr

    Represents the attributes (color, font, ...) of an item of a control with
    multiple items such as e.g. wxListCtrl.

    @library{wxcore}
    @category{data}

    @see @ref overview_listctrl

    @since 3.1.1 (previous versions had a similar wxListItemAttr class)
*/
class wxItemAttr
{
public:
    /**
        Default Constructor.
    */
    wxItemAttr();

    /**
        Construct a wxItemAttr with the specified foreground and
        background colors and font.
    */
    wxItemAttr(const wxColour& colText,
               const wxColour& colBack,
               const wxFont& font);

    /**
        Returns the currently set background color.
    */
    const wxColour& GetBackgroundColour() const;

    /**
        Returns the currently set font.
    */
    const wxFont& GetFont() const;

    /**
        Returns the currently set text color.
    */
    const wxColour& GetTextColour() const;

    /**
        Returns @true if the currently set background color is valid.
    */
    bool HasBackgroundColour() const;

    /**
        Returns @true if either text or background colour is set.

        @see HasBackgroundColour(), HasTextColour()
    */
    bool HasColours() const;

    /**
        Returns @true if the currently set font is valid.
    */
    bool HasFont() const;

    /**
        Returns @true if the currently set text color is valid.
    */
    bool HasTextColour() const;

    /**
        Returns @true if this object has no custom attributes set.
     */
    bool IsDefault() const;

    /**
        Sets a new background color.
    */
    void SetBackgroundColour(const wxColour& colour);

    /**
        Sets a new font.
    */
    void SetFont(const wxFont& font);

    /**
        Sets a new text color.
    */
    void SetTextColour(const wxColour& colour);
};
