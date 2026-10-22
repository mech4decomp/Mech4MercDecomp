/*
 * FUN_00618730 (114 B) — __thiscall (ECX = this), RET 4 (1 byte param).
 *
 * Walks a linked list at this+0x24 -> +0x48, and for each node calls
 * FUN_00617D10(node, &param, flag, 0), then decrements a refcount and
 * frees via FUN_004084E0 when it hits zero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00617D10(void *this, int a, int b, int c, int d);
extern void __cdecl FUN_004084E0(int param);

__declspec(naked) void __fastcall FUN_00618730(void)
{
    __asm {
        push    ebx
        mov     bl, byte ptr [esp + 8]
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0x24]
        push    esi
        add     eax, 0x48
        push    edi
        mov     edi, dword ptr [eax]
L_loop:
        test    edi, edi
        jz      L_end
        mov     eax, dword ptr [edi]
        test    eax, eax
        mov     edi, dword ptr [edi + 4]
        jz      L_end
        test    bl, bl
        mov     esi, dword ptr [eax + 0x10]
        jz      L_bl0
        test    esi, esi
        jz      L_call
        inc     byte ptr [esi - 1]
L_call:
        push    0
        push    0
        lea     eax, [esp + 0x1C]
        push    eax
L_call_push:
        push    esi
        mov     ecx, ebp
        call    FUN_00617D10
        test    esi, esi
        jz      L_loop
        mov     cl, byte ptr [esi - 1]
        lea     eax, [esi - 1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_loop
        push    eax
        call    FUN_004084E0
        add     esp, 4
        jmp     L_loop
L_bl0:
        test    esi, esi
        jz      L_bl0_call
        inc     byte ptr [esi - 1]
L_bl0_call:
        push    0
        push    1
        lea     ecx, [esp + 0x1C]
        push    ecx
        jmp     L_call_push
L_end:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
