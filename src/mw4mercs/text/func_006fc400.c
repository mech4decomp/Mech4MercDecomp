/*
 * FUN_006FC400 (174 B) — File path normalizer + allocator + linked-list inserter.
 *
 * __cdecl, RET 0xC (3 params: param_1=out_ptr, param_2=path, param_3=extra).
 * Normalizes double-backslashes in the path, allocates a 0x114-byte block,
 * initializes it via FUN_006fc660, then links it into a global singly-linked
 * list at 0x008566fc (head) / 0x00856700 (counter).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern int  __cdecl FUN_006fc660(const char *, int);

__declspec(naked) void __cdecl FUN_006FC400(int *out_ptr, const char *path, int extra)
{
    __asm {
        sub     esp, 0x104
        push    esi
        mov     esi, [esp + 0x110]
        push    edi
        lea     edi, [esi + 1]
        push    0x7a01c4
        push    edi
        _emit   0xFF
        _emit   0x15
        _emit   0x90
        _emit   0xB3
        _emit   0x76
        _emit   0x00
        add     esp, 8
        test    eax, eax
        jz      l_skip_normalize
        mov     al, [esi]
        mov     [esp + 0x08], al
        mov     eax, edi
        mov     cl, [eax]
        test    cl, cl
        lea     edx, [esp + 0x09]
        jz      l_copy_done
    l_copy_loop:
        cmp     cl, 0x5c
        jnz     l_copy_char
        cmp     byte ptr [eax + 1], 0x5c
        jnz     l_copy_char
        inc     eax
    l_copy_char:
        mov     cl, [eax]
        mov     [edx], cl
        mov     cl, [eax + 1]
        inc     edx
        inc     eax
        test    cl, cl
        jnz     l_copy_loop
    l_copy_done:
        mov     byte ptr [edx], 0
        lea     esi, [esp + 0x08]
    l_skip_normalize:
        push    0x114
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_alloc_fail
        mov     edx, [esp + 0x118]
        push    edx
        push    esi
        mov     ecx, eax
        call    FUN_006fc660
        jmp     l_done
    l_alloc_fail:
        xor     eax, eax
    l_done:
        mov     ecx, [esp + 0x110]
        _emit   0x8B
        _emit   0x15
        _emit   0xFC
        _emit   0x66
        _emit   0x85
        _emit   0x00
        mov     [ecx], eax
        _emit   0x8B
        _emit   0x0D
        _emit   0x00
        _emit   0x67
        _emit   0x85
        _emit   0x00
        inc     ecx
        pop     edi
        _emit   0x89
        _emit   0x0D
        _emit   0x00
        _emit   0x67
        _emit   0x85
        _emit   0x00
        mov     [eax + 0x10c], edx
        _emit   0xA3
        _emit   0xFC
        _emit   0x66
        _emit   0x85
        _emit   0x00
        pop     esi
        add     esp, 0x104
        ret     0x0c
    }
}
