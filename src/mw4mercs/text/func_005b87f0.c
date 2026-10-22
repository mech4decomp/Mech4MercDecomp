/*
 * FUN_005b87f0 (70 B) — __thiscall (ECX = this), RET 8 (two stack params).
 *
 * Virtual-calls FUN_004d9400, then writes results into a returned buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004d9400(void);

__declspec(naked) void __fastcall FUN_005b87f0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x64
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
        mov     cx, word ptr [edi + 0x174]
        mov     dx, word ptr [edi + 0x176]
        mov     dword ptr [eax], 0x64
        pop     edi
        mov     word ptr [eax + 0x60], cx
        mov     word ptr [eax + 0x62], dx
        pop     esi
        ret     8
    }
}
