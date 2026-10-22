/*
 * FUN_0067b110 (131 B) — String-buffer initializer.
 *
 * Builds a growable string buffer struct (3 dwords: ptr, end, cap) around
 * the literal "Libraries\\Switch To >>\\", allocating via FUN_004084d0 and
 * copying via memmove (IAT 0x0076b28c). Returns the struct pointer in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(void *);
extern int DAT_0076b28c;   /* IAT: memmove */

__declspec(naked) void * __cdecl FUN_0067b110(void *param_1)
{
    __asm {
        mov     al, byte ptr [esp + 0x4]
        push    ebx
        push    ebp
        xor     edx, edx
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        mov     dword ptr [esi], edx
        or      ecx, 0xffffffff
        mov     byte ptr [esi + 0x8], al
        xor     eax, eax
        mov     edi, 0x7987d8
        repne   scasb
        not     ecx
        dec     ecx
        mov     ebp, ecx
        add     ebp, 0x7987d8
        mov     ebx, ebp
        sub     ebx, 0x7987d8
        lea     edi, [ebx + 0x1]
        cmp     edi, -0x2
        mov     dword ptr [esi + 0x4], edx
        mov     dword ptr [esi + 0x8], edx
        ja      L_67b16b
        cmp     edi, edx
        jz      L_67b15f
        push    edi
        call    FUN_004084d0
        add     esp, 0x4
        jmp     L_67b161
L_67b15f:
        xor     eax, eax
L_67b161:
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x4], eax
        add     eax, edi
        mov     dword ptr [esi + 0x8], eax
L_67b16b:
        mov     edi, dword ptr [esi]
        push    ebx
        push    0x7987d8
        push    edi
        call    dword ptr [DAT_0076b28c]
        add     esp, 0xc
        sub     edi, 0x7987d8
        lea     eax, [edi + ebp*1]
        pop     edi
        mov     dword ptr [esi + 0x4], eax
        mov     byte ptr [eax], 0x0
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
