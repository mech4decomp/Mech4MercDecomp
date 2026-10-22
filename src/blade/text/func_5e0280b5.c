/* auto-transcribed gap function 0x5E0280B5 (75 B); review against reference; stepping stone */
extern void __cdecl FUN_5e028046(void);
extern int g_5e77a838;
__declspec(naked) void FUN_5e0280b5(void)
{
    __asm {
            and esi, 0xf8000000
            shr esi, 0x11
            and eax, 0x1f
            and ebx, 0x3e0
            or eax, esi
            add edx, ebp
            or eax, ebx
            and edx, 0xffdffbff
            mov esi, eax
            shl eax, 0x10
            or eax, esi
            mov dword ptr [edi + ecx*4], eax
            inc ecx
            __emit 0x75 /* jne 0x5e0280a9: MSVC6 cannot encode natively */
            __emit 0xc9 /* jne 0x5e0280a9: MSVC6 cannot encode natively */
            pop ebp
            dec ebp
            __emit 0x74 /* je 0x5e0280a8: MSVC6 cannot encode natively */
            __emit 0xc4 /* je 0x5e0280a8: MSVC6 cannot encode natively */
            mov edx, dword ptr [g_5e77a838]
            push ebp
            add edi, edx
            jmp FUN_5e028046
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
    }
}
