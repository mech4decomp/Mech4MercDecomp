/*
 * MW4Stats.dll - FUN_10004fe0 (0x10004FE0, 284 B, __fastcall)
 * Constructor: chains FUN_10001660 sub-object ctors across the object,
 * zeroes field at +0x398. RET.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_10001660(void);

__declspec(naked) void __cdecl FUN_10004fe0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    0x1002754c
        lea     ecx, [esi + 8]
        call    FUN_10001660
        push    0x10027550
        lea     ecx, [esi + 0xa0]
        call    FUN_10001660
        push    0x10027554
        lea     ecx, [esi + 0x138]
        call    FUN_10001660
        push    0x10027558
        lea     ecx, [esi + 0x1d0]
        call    FUN_10001660
        push    0x1002755c
        lea     ecx, [esi + 0x268]
        call    FUN_10001660
        push    0x10027560
        lea     ecx, [esi + 0x300]
        call    FUN_10001660
        push    0x10027564
        lea     ecx, [esi + 0x39c]
        mov     dword ptr [esi + 0x398], 0
        call    FUN_10001660
        push    0x10027568
        lea     ecx, [esi + 0x434]
        call    FUN_10001660
        push    0x1002756c
        lea     ecx, [esi + 0x4cc]
        call    FUN_10001660
        push    0x10027570
        lea     ecx, [esi + 0x564]
        call    FUN_10001660
        push    0x10027574
        lea     ecx, [esi + 0x5fc]
        call    FUN_10001660
        push    0x10027578
        lea     ecx, [esi + 0x694]
        call    FUN_10001660
        push    0x1002757c
        lea     ecx, [esi + 0x72c]
        call    FUN_10001660
        push    0x10027580
        lea     ecx, [esi + 0x7c4]
        call    FUN_10001660
        push    0x10027584
        lea     ecx, [esi + 0x85c]
        call    FUN_10001660
        push    0x10027588
        lea     ecx, [esi + 0x8f4]
        call    FUN_10001660
        push    0x1002758c
        lea     ecx, [esi + 0x98c]
        call    FUN_10001660
        pop     esi
        ret
    }
}
