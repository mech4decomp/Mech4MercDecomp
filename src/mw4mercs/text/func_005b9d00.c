/*
 * FUN_005b9d00 (81 B) — __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041fcb0(void);
extern void __stdcall FUN_0041fcd0(void);

__declspec(naked) void __stdcall FUN_005b9d00(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x180]
        cmp     edi, 0x20
        jge     L_9d4c
        push    ebx
        mov     ebx, dword ptr [esi + edi*0x4 + 0x254]
        push    ebp
        lea     ebp, [ebx + 0x10]
        mov     ecx, ebp
        call    FUN_0041fcb0
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        mov     ecx, ebp
        call    FUN_0041fcd0
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [ebx + 0x18], ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x60]
        mov     ecx, ebx
        inc     edi
        pop     ebp
        mov     dword ptr [ecx + 0x1c], eax
        mov     dword ptr [esi + 0x180], edi
        pop     ebx
L_9d4c:
        pop     edi
        pop     esi
        ret     0x8
    }
}
