/*
 * FUN_005a3cd0 (101 B) — Object initialization.
 *
 * __cdecl, RET 4 (one stack param: pointer).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_00523e60(void);
extern int __fastcall FUN_005f0a60(void);

__declspec(naked) void __cdecl FUN_005a3cd0(void *param_1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi]
        push    0x98
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    esi
        push    ecx
        lea     edx, [esp + 0x10]
        mov     ecx, esp
        push    edx
        call    FUN_00523e60
        call    FUN_005f0a60
        mov     eax, dword ptr [esi]
        add     esp, 8
        mov     ecx, esi
        call    dword ptr [eax + 4]
        xor     ecx, ecx
        mov     dword ptr [eax + 0x6c], ecx
        mov     dword ptr [eax + 0x70], ecx
        mov     dword ptr [eax + 0x74], ecx
        mov     dword ptr [eax + 0x78], ecx
        mov     dword ptr [eax + 0x7c], ecx
        mov     dword ptr [eax + 0x80], ecx
        mov     dword ptr [eax + 0x84], ecx
        mov     dword ptr [eax + 0x88], ecx
        mov     dword ptr [eax + 0x8c], ecx
        mov     dword ptr [eax + 0x90], ecx
        mov     dword ptr [eax + 0x94], ecx
        pop     esi
        ret
    }
}
