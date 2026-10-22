/*
 * FUN_005b23f0 (66 B) — __thiscall (ECX=this). Destructor: writes vtable
 * 0x7860fc, frees two members (ESI+0x6bc, ESI+0x6b0) via FUN_004084e0 if
 * non-null, then calls FUN_005c1520(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);
extern void FUN_005c1520(void);

__declspec(naked) void FUN_005b23f0(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x7860fc
        mov     eax, dword ptr [esi + 0x6bc]
        test    eax, eax
        mov     dword ptr [esp + 0x4], eax
        jz      L2411
        push    eax
        call    FUN_004084e0
        add     esp, 4
L2411:
        mov     eax, dword ptr [esi + 0x6b0]
        test    eax, eax
        mov     dword ptr [esp + 0x4], eax
        jz      L2428
        push    eax
        call    FUN_004084e0
        add     esp, 4
L2428:
        mov     ecx, esi
        call    FUN_005c1520
        pop     esi
        pop     ecx
        ret
    }
}
