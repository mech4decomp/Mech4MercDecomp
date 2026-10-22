/*
 * FUN_10006170 (208 B) - __thiscall, RET 0x14.
 * Object constructor: calls FUN_1001add0(0xfe), stores 3 args into
 * +0x8/+0xc/+0x10, computes a hash-table size from the arg4 mask (bit-scan
 * for the highest set bit), allocates the bucket array (FUN_10001d50) and
 * initializes each bucket as a self-referential doubly-linked list.
 *
 * __thiscall (this in ECX, 5 stack args).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001add0(void);   /* rel32 call, 1 arg */
extern void *__cdecl FUN_10001d50(int);   /* rel32 call, alloc */

__declspec(naked) void FUN_10006170(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        push    0xfe
        mov     esi, ecx
        call    FUN_1001add0
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edi, dword ptr [esp + 0x1c]
        xor     ebx, ebx
        mov     dword ptr [esi + 0x10], edx
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi + 0x8], ecx
        mov     dword ptr [esi + 0x24], ebx
        mov     dword ptr [esi + 0x28], ebx
        mov     edx, 0xf
    L_61a5:
        mov     cl, dl
        mov     eax, 0x1
        shl     eax, cl
        mov     ecx, eax
        and     ecx, edi
        test    cx, cx
        mov     word ptr [esi + 0x2], ax
        jnz     L_61c3
        add     edx, 0xffff
        jmp     L_61a5
    L_61c3:
        xor     eax, edi
        test    ax, ax
        jz      L_61db
        xor     ecx, ecx
        mov     cl, dl
        inc     cl
        mov     edx, 0x1
        shl     edx, cl
        mov     word ptr [esi + 0x2], dx
    L_61db:
        xor     eax, eax
        mov     ax, word ptr [esi + 0x2]
        mov     word ptr [esi], ax
        dec     eax
        mov     word ptr [esi + 0x2], ax
        mov     ax, word ptr [esi]
        cmp     ax, 0x1
        ja      L_61f7
        lea     eax, [esi + 0x14]
        jmp     L_6208
    L_61f7:
        xor     ecx, ecx
        mov     cx, ax
        shl     ecx, 0x4
        push    ecx
        call    FUN_10001d50
        add     esp, 0x4
    L_6208:
        xor     edx, edx
        cmp     word ptr [esi], bx
        mov     dword ptr [esi + 0x4], eax
        jbe     L_6238
    L_6212:
        mov     edi, dword ptr [esi + 0x4]
        xor     ecx, ecx
        mov     cx, dx
        mov     eax, ecx
        shl     eax, 0x4
        add     eax, edi
        or      ecx, 0x80000000
        inc     edx
        mov     dword ptr [eax], eax
        mov     dword ptr [eax + 0x4], eax
        mov     dword ptr [eax + 0x8], ebx
        mov     dword ptr [eax + 0xc], ecx
        cmp     dx, word ptr [esi]
        jc      L_6212
    L_6238:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x14
    }
}
