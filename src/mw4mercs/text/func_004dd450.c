/*
 * FUN_004dd450 (71 B) — __thiscall ctor (RET 0xc). Initializes an object
 * with vtable 0x76cd9c, delegates to FUN_00415180, builds a sub-object
 * at +0x14 (vtable 0x773828) via FUN_0041fc80 / FUN_0041fcd0, and stores
 * param_2 at +0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_0041fcd0(void);

__declspec(naked) void FUN_004dd450(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     eax, eax
        lea     edi, [esi + 0x14]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_0041fc80
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x10], ecx
        push    edx
        mov     ecx, edi
        mov     dword ptr [edi], 0x773828
        call    FUN_0041fcd0
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0xc
    }
}
