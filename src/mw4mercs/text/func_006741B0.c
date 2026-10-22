/*
 * FUN_006741B0 (60 B) — __thiscall (RET 0x4). Calls FUN_005619A0(arg),
 * then via a sub-object at [this+0xc] resolves a pointer at +0x3d4 and
 * stores a float result into [this+0x50].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005619a0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005ba2a0(void);

__declspec(naked) void FUN_006741B0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_005619a0
        lea     edi, [esi + 0xc]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je      L_6741e7
        mov     ecx, edi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0x3d4]
        test    eax, eax
        je      L_6741e7
        mov     ecx, eax
        call    FUN_005ba2a0
        fstp    dword ptr [esi + 0x50]
L_6741e7:
        pop     edi
        pop     esi
        ret     4
    }
}
