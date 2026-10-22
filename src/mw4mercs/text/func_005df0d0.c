/*
 * FUN_005df0d0 (144 B) — __thiscall (ECX = this), RET 8.
 *
 * Walks a linked list at [this+0x10]; for each node compares the string
 * at [node+0x10] against arg1 (EBP). If arg2 (byte) is nonzero, does a
 * case-sensitive strcmp; otherwise calls FUN_004084e0 (case-insensitive
 * compare) via import at 0x0076b2b0. Returns the matching node (EBX).
 * If arg1 != NULL, decrements byte [arg1-1] and, if it becomes 0, calls
 * FUN_004084e0(arg1-1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004084e0(void *param);

__declspec(naked) int __stdcall FUN_005df0d0(void *arg1, char arg2)
{
    

extern int DAT_0076b2b0;
__asm {
push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xC]
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x10]
    L_db:
        test    edi, edi
        jz      L_13c
        mov     eax, dword ptr [edi]
        test    eax, eax
        mov     edi, dword ptr [edi + 0x4]
        mov     ebx, eax
        jz      L_13e
        mov     cl, byte ptr [esp + 0x18]
        test    cl, cl
        jz      L_126
        mov     eax, dword ptr [eax + 0x10]
        mov     esi, ebp
    L_f7:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_11b
        test    cl, cl
        jz      L_117
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_11b
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_f7
    L_117:
        xor     eax, eax
        jmp     L_120
    L_11b:
        sbb     eax, eax
        sbb     eax, -0x1
    L_120:
        test    eax, eax
        jz      L_13e
        jmp     L_db
    L_126:
        mov     eax, dword ptr [eax + 0x10]
        push    0x4
        push    ebp
        push    eax
        call dword ptr [DAT_0076b2b0]
        add     esp, 0xC
        test    eax, eax
        jz      L_13e
        jmp     L_db
    L_13c:
        xor     ebx, ebx
    L_13e:
        test    ebp, ebp
        jz      L_157
        mov     cl, byte ptr [ebp - 0x1]
        lea     eax, [ebp - 0x1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_157
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_157:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        ret     8
    }


}
