/*
 * FUN_10004B40 (92 B) - __stdcall, RET 0x4.  Releases two members
 * (field_0x7c and field_0x78): calls FUN_10004ba0 (thiscall) on each then
 * frees via FUN_10001d60, then calls FUN_10005a40 on this-0x14.  Returns 0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10004ba0(void);   /* rel32 call (thiscall, ecx=this) */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */
extern void __cdecl FUN_10004d90(void);   /* rel32 call (thiscall, ecx=this) */
extern void __cdecl FUN_10005a40(void);   /* rel32 call, 1 arg */

__declspec(naked) void __stdcall FUN_10004B40(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, dword ptr [edi + 0x7c]
        test    esi, esi
        jne     L1
        pop     edi
        mov     eax, 0xc112000f
        pop     esi
        ret     0x4
L1:
        mov     ecx, esi
        call    FUN_10004ba0
        push    esi
        call    FUN_10001d60
        mov     esi, dword ptr [edi + 0x78]
        add     esp, 4
        test    esi, esi
        mov     dword ptr [edi + 0x7c], 0
        je      L2
        mov     ecx, esi
        call    FUN_10004d90
        push    esi
        call    FUN_10001d60
        add     esp, 4
        mov     dword ptr [edi + 0x78], 0
L2:
        add     edi, -0x14
        push    edi
        call    FUN_10005a40
        pop     edi
        xor     eax, eax
        pop     esi
        ret     0x4
    }
}
