/*
 * FUN_005b7cf0 (60 B) — __thiscall (ECX = this), RET 8 (2 stack args).
 * Calls a virtual method (vtable+0x14) on the source object, then
 * FUN_004d9400, then a virtual method (vtable+0x4); stores results into
 * the returned object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004d9400(void);

__declspec(naked) void *__fastcall FUN_005b7cf0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x47c
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        push    esi
        mov     ecx, edi
        call    FUN_004d9400
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     ecx, dword ptr [edi + 0x170]
        pop     edi
        mov     dword ptr [eax + 0x60], ecx
        mov     dword ptr [eax], 0x47c
        pop     esi
        ret     0x8
    }
}
