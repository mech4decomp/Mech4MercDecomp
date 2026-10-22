/*
 * MW4Stats.dll - FUN_10004610 (0x10004610, 181 B, __fastcall)
 * SEH-guarded constructor. Sets up exception frame, calls FUN_100046d0,
 * FUN_10005e20, sets vtable 0x1002124c, zeroes fields, calls FUN_10001660
 * four times with sub-object ctors, tears down frame. RET.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_100046d0(void);
extern void __cdecl FUN_10005e20(void);
extern void __cdecl FUN_10001660(void);

__declspec(naked) void __cdecl FUN_10004610(void)
{
    __asm {
        push    -1
        push    0x1001f4c8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 4], esi
        call    FUN_100046d0
        lea     eax, [esi + 0x280]
        push    eax
        lea     ecx, [esi + 0x284]
        mov     dword ptr [esp + 0x14], 0
        call    FUN_10005e20
        xor     ecx, ecx
        mov     dword ptr [esi], 0x1002124c
        lea     edx, [esi + 4]
        mov     dword ptr [edx], ecx
        mov     dword ptr [edx + 4], ecx
        mov     dword ptr [edx + 8], ecx
        mov     dword ptr [edx + 0xc], ecx
        mov     dword ptr [esi + 0x14], ecx
        push    0x1002753c
        lea     ecx, [esi + 0x1c]
        mov     dword ptr [esi + 0x18], 0x150
        call    FUN_10001660
        push    0x10027540
        lea     ecx, [esi + 0xb4]
        call    FUN_10001660
        push    0x10027544
        lea     ecx, [esi + 0x150]
        mov     dword ptr [esi + 0x14c], 0
        call    FUN_10001660
        push    0x10027548
        lea     ecx, [esi + 0x1e8]
        call    FUN_10001660
        mov     ecx, dword ptr [esp + 8]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
