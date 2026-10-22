/*
 * FUN_00539690 (711 B) — __thiscall method on a large object.
 *
 * Processes input from a stream-like object (vtable at [ESI]):
 * - Reads 3 values via vtable+0x20
 * - Gets a string via vtable+4, measures its length
 * - Calls vtable+0x18 with the length
 * - Optionally releases the stream (vtable+0xc)
 * - Checks a byte flag and index against global
 * - Computes an index into a 0x2038-stride table
 * - Handles special case for DL==8 with sub-checks
 * - Calls FUN_00707E70 for timing/position values
 * - Stores float/double values into the table
 * - Accumulates and checks a float sum
 * - Calls FUN_00539F90 and FUN_00539AA0 for each active slot
 * - Calls FUN_00539960 at the end
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* External function declarations */
extern void *FUN_00707e70(int a);
extern void FUN_00539f90(int a, int b, int c);
extern char FUN_00539aa0(int a, int b, int c, int d);
extern void FUN_00539960(int a, int b, int c, int d);
extern void FUN_004ce190(int a, int b, void *c, int d);

/* Global data references */
extern int DAT_007db094;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern float DAT_0076c5b0;
extern float DAT_0076c5ac;

__declspec(naked) void FUN_00539690(void)
{
    
__asm {
sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esi]
        push    edi
        mov     ebp, ecx
        push    1
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]

        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]

        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]

        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]

        mov     edx, dword ptr [esi]
        mov     ebx, eax
        or      ecx, -1
        xor     eax, eax
        mov     edi, ebx
        repne scasb
        not     ecx
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], ebx
        call    dword ptr [edx + 0x18]

        test    esi, esi
        jz      stream_done
        mov     eax, dword ptr [esi]
        push    0
        mov     ecx, esi
        call    dword ptr [eax + 0xc]
        mov     dword ptr [esi + 8], 0xffffffec

    stream_done:
        mov     dl, byte ptr [esp + 0x28]
        test    dl, dl
        mov     ecx, dword ptr [esp + 0x10]
        jnz     check_active
        mov     eax, dword ptr [DAT_007db094]
        cmp     cl, byte ptr [eax + 0x28]
        jnz     ret_fail

    check_active:
        mov     eax, ecx
        and     eax, 0xff
        mov     edi, eax
        shl     edi, 7
        add     edi, eax
        shl     edi, 3
        sub     edi, eax
        cmp     byte ptr [ebp + edi*8 + 0x3538], 0
        lea     eax, [ebp + edi*8]
        jz      ret_fail

        cmp     dl, 8
        jnz     skip_special

        mov     dl, byte ptr [ebp + 0x16]
        test    dl, dl
        jz      use_54
        mov     edx, dword ptr [ebp + 0x50]
        jmp     got_ptr
    use_54:
        mov     edx, dword ptr [ebp + 0x54]
    got_ptr:
        mov     edi, dword ptr [edx + 0xe4]
        test    edi, edi
        jz      set_flag_7
        cmp     dword ptr [eax + 0x3548], 8
        jz      set_flag_7

        mov     edx, dword ptr [ebp]
        push    0x2e8
        mov     ecx, ebp
        call    dword ptr [edx + 0x34]
        mov     edi, eax
        or      ecx, -1
        xor     eax, eax
        repne scasb
        not     ecx
        mov     al, byte ptr [ecx + ebx - 1]
        dec     ecx
        test    al, al
        jnz     skip_early_ret
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     8

    set_flag_7:
        mov     byte ptr [esp + 0x28], 7
        jmp     skip_special

    skip_early_ret:
        mov     ecx, dword ptr [esp + 0x10]

    skip_special:
        and     ecx, 0xff
        mov     eax, ecx
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        push    0
        lea     edi, [ebp + ecx*8]
        call    FUN_00707e70
        fsub    qword ptr [edi + 0x35d4]
        mov     edx, dword ptr [edi + 0x35cc]
        mov     eax, dword ptr [edi + 0x35d0]
        fstp    dword ptr [eax + edx*4]

        mov     edx, dword ptr [edi + 0x35cc]
        mov     ecx, dword ptr [edi + 0x35c8]
        inc     edx
        mov     eax, edx
        cmp     eax, ecx
        mov     dword ptr [edi + 0x35cc], edx
        jc      skip_wrap
        mov     dword ptr [edi + 0x35cc], 0

    skip_wrap:
        mov     eax, dword ptr [esp + 0x10]
        and     eax, 0xff
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        push    0
        lea     edi, [ebp + ecx*8]
        call    FUN_00707e70
        fstp    qword ptr [edi + 0x35d4]

        mov     al, byte ptr [esp + 0x28]
        test    al, al
        jz      skip_accum

        mov     eax, dword ptr [edi + 0x35c8]
        cmp     eax, 0x14
        jnz     skip_accum

        test    eax, eax
        fld     dword ptr [DAT_0076c5b0]
        jbe     fstp_ret_fail

        mov     edi, dword ptr [edi + 0x35d0]
    accum_loop:
        fadd    dword ptr [edi]
        add     edi, 4
        dec     eax
        jnz     accum_loop

        fcomp   dword ptr [DAT_0076c5ac]
        fnstsw  ax
        test    ah, 1
        jnz     ret_fail

    skip_accum:
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x10]
        lea     edx, [esp + 0x18]
        push    edx
        push    eax
        push    ecx
        mov     ecx, ebp
        call    FUN_00539f90
        mov     byte ptr [esp + 0x28], al

        mov     al, byte ptr [ebp + 0x16]
        test    al, al
        jz      call_final

        lea     edx, [ebp + 0x3538]
        xor     ebx, ebx
        mov     edi, 8

    inner_loop_setup:
        mov     dword ptr [esp + 0x14], edx

    inner_loop:
        mov     eax, dword ptr [esp + 0x14]
        cmp     byte ptr [eax], 0
        jz      inner_next
        mov     edx, dword ptr [DAT_007db094]
        xor     ecx, ecx
        mov     cl, byte ptr [edx + 0x28]
        cmp     ebx, ecx
        jz      inner_next

        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x10]
        push    ebx
        push    eax
        push    ecx
        push    edx
        mov     ecx, ebp
        call    FUN_00539aa0
        test    al, al
        jnz     inner_next

        mov     ecx, dword ptr [esi + 0x10]
        mov     eax, dword ptr [esi + 0x18]
        sub     eax, ecx
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x14]
        add     edx, 0x14
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        add     ecx, 0x3c3c
        push    1
        shl     eax, 3
        add     dword ptr [edi + ecx], eax
        add     dword ptr [ecx + 0xc00], eax
        mov     ecx, dword ptr [edx]
        push    esi
        push    0x1b
        push    ebx
        xor     ecx, 0x85739531
        call    FUN_004ce190

    inner_next:
        mov     ecx, dword ptr [esp + 0x14]
        add     edi, 4
        add     ecx, 0x2038
        inc     ebx
        cmp     edi, 0x404
        mov     dword ptr [esp + 0x14], ecx
        jl      inner_loop

        mov     ebx, dword ptr [esp + 0x1c]

    call_final:
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x10]
        push    ebx
        push    edx
        push    eax
        push    ecx
        mov     ecx, ebp
        call    FUN_00539960

        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     8

    fstp_ret_fail:
        fstp    st(0)

    ret_fail:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     8
    }


}
