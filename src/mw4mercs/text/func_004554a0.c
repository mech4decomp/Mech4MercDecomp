/*
 * FUN_004554a0 (91 B) — MLR material/render helper. __thiscall (ECX = this).
 * Calls a sub-constructor, builds a 6-arg float call, then copies 6 dwords
 * from a virtual-stream result into this+0x70.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00458660(void);
extern void __cdecl FUN_004555e0(void);

__declspec(naked) void FUN_004554a0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+8]
        push    edi
        mov     edi, ecx
        push    esi
        call    FUN_00458660
        fld     dword ptr [esi+0x9c]
        mov     eax, dword ptr [esi+0x98]
        push    0x42c80000
        push    0x42a00000
        push    ecx
        fstp    dword ptr [esp]
        fld     dword ptr [esi+0x90]
        push    eax
        push    eax
        push    ecx
        fstp    dword ptr [esp]
        mov     ecx, edi
        mov     dword ptr [esp+0x24], eax
        call    FUN_004555e0
        mov     edx, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [edx+0x18]
        add     edi, 0x70
        mov     esi, eax
        mov     ecx, 6
        rep movsd
        pop     edi
        mov     al, 1
        pop     esi
        ret     0x4
    }
}
