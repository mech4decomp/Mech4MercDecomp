/*
 * FUN_00667680 (232 B) — __thiscall vector reallocation/insert routine.
 * Reallocates a growable array (begin/end/cap at this+0/4/8), copies the
 * existing range, inserts `count` elements from the source pointer, and
 * copies the tail. RET 0xc (3 stack args).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);   /* alloc */
extern void  __cdecl FUN_004084e0(void *p);    /* free  */

__declspec(naked) void FUN_00667680(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        mov     ebx, ecx
        mov     ebp, dword ptr [ebx]
        push    edi
        mov     edi, dword ptr [ebx + 0x4]
        mov     eax, edi
        sub     eax, ebp
        sar     eax, 2
        cmp     eax, esi
        mov     dword ptr [esp + 0x10], eax
        lea     ecx, [esp + 0x20]
        jc      L_a7
        lea     ecx, [esp + 0x10]
L_a7:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x10], ecx
        jz      L_c7
        lea     eax, [ecx*4 + 0]
        push    eax
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [esp + 0x20], eax
        jmp     L_cf
L_c7:
        mov     dword ptr [esp + 0x20], 0
L_cf:
        mov     edx, dword ptr [esp + 0x18]
        cmp     ebp, edx
        mov     eax, dword ptr [esp + 0x20]
        jz      L_ef
        mov     ecx, ebp
L_dd:
        test    eax, eax
        jz      L_e5
        mov     ebp, dword ptr [ecx]
        mov     dword ptr [eax], ebp
L_e5:
        add     ecx, 4
        add     eax, 4
        cmp     ecx, edx
        jnz     L_dd
L_ef:
        cmp     esi, 1
        jnz     L_705
        test    eax, eax
        jz      L_700
        mov     ecx, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax], ecx
L_700:
        add     eax, 4
        jmp     L_71d
L_705:
        test    esi, esi
        jbe     L_71d
        mov     ecx, esi
        mov     esi, dword ptr [esp + 0x1c]
L_70f:
        test    eax, eax
        jz      L_717
        mov     ebp, dword ptr [esi]
        mov     dword ptr [eax], ebp
L_717:
        add     eax, 4
        dec     ecx
        jnz     L_70f
L_71d:
        cmp     edx, edi
        mov     esi, eax
        jz      L_73a
        mov     ecx, edx
        sub     ecx, eax
L_727:
        test    esi, esi
        jz      L_730
        mov     edx, dword ptr [ecx + esi*1]
        mov     dword ptr [esi], edx
L_730:
        add     esi, 4
        lea     eax, [ecx + esi*1]
        cmp     eax, edi
        jnz     L_727
L_73a:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        jz      L_74d
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_74d:
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x10]
        pop     edi
        mov     dword ptr [ebx + 0x4], esi
        pop     esi
        lea     edx, [eax + ecx*4]
        pop     ebp
        mov     dword ptr [ebx], eax
        mov     dword ptr [ebx + 0x8], edx
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
