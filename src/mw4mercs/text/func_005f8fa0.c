/*
 * FUN_005f8fa0 (91 B) — __thiscall, 1 stack arg (RET 4). Walks a linked list
 * at this+0x398, finds a node whose name (after "::") matches arg1, returns
 * the node pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0076b298;
extern int *g_0076b2ac;

__declspec(naked) void FUN_005f8fa0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [ecx+0x398]
        push    ebp
        mov     ebp, dword ptr [g_0076b298]
        push    esi
        push    edi
L_8fb0:
        test    ebx, ebx
        jz      L_8ff2
        mov     edi, dword ptr [ebx]
        test    edi, edi
        mov     ebx, dword ptr [ebx+0x4]
        jz      L_8ff2
        mov     esi, dword ptr [edi+0x2c]
        push    0x772d84
        push    esi
        call    ebp
        add     esp, 8
        test    eax, eax
        jz      L_8fd4
        add     eax, 2
        jmp     L_8fd6
L_8fd4:
        mov     eax, esi
L_8fd6:
        mov     ecx, dword ptr [esp+0x14]
        push    ecx
        push    eax
        call    dword ptr [g_0076b2ac]
        add     esp, 8
        test    eax, eax
        jnz     L_8fb0
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
L_8ff2:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     4
    }
}
