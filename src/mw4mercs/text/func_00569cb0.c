/*
 * FUN_00569CB0 (281 B) — Object list processing with vector computation.
 *
 * Takes two pointer parameters, processes a list of objects, computes
 * average position vectors, and stores the result.
 *
 * __cdecl, returns pointer (param_2).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00580540(void *param_1);
extern void __cdecl FUN_00566ef0(void *param_1, void *param_2, int param_3);
extern void __cdecl FUN_00580560(void);
extern void __cdecl FUN_0040c9e0(void *param_1, void *param_2);
extern void __cdecl FUN_004084e0(void *param_1);

__declspec(naked) void * __cdecl FUN_00569cb0(void *param_1, void *param_2)
{
    __asm {
        sub     esp, 0x28
        push    esi
        lea     eax, dword ptr [esp + 0x07]
        push    eax
        lea     ecx, dword ptr [esp + 0x24]
        call    FUN_00580540
        mov     edx, dword ptr [esp + 0x34]  /* param_2 */
        push    0x0
        lea     ecx, dword ptr [esp + 0x24]
        push    ecx
        push    edx
        call    FUN_00566ef0
        mov     eax, dword ptr [esp + 0x30]  /* param_1 (adjusted) */
        mov     esi, dword ptr [esp + 0x2c]  /* iterator */
        mov     ecx, eax
        sub     ecx, esi
        add     esp, 0x0c
        test    ecx, 0xfffffffc
        jnz     Ld0b

        /* All elements are aligned: return default vector (-1, -1, -1) */
        mov     esi, dword ptr [esp + 0x30]  /* param_1 */
        mov     eax, 0xbf800000              /* -1.0f */
        lea     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0x8], eax
        call    FUN_00580560
        mov     eax, esi
        pop     esi
        add     esp, 0x28
        ret

Ld0b:
        /* Process list of objects */
        cmp     esi, eax
        mov     dword ptr [esp + 0x14], 0x0  /* sum_x = 0 */
        mov     dword ptr [esp + 0x18], 0x0  /* sum_y = 0 */
        mov     dword ptr [esp + 0x1c], 0x0  /* sum_z = 0 */
        jz      Ld6e

Ld27:
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [edx + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x08], ecx
        mov     edx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x0c], edx
        mov     eax, dword ptr [eax + 0x2c]
        lea     ecx, dword ptr [esp + 0x08]
        push    ecx
        lea     edx, dword ptr [esp + 0x18]
        push    edx
        lea     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x18], eax
        call    FUN_0040c9e0
        mov     eax, dword ptr [esp + 0x24]
        add     esi, 0x4
        cmp     esi, eax
        jnz     Ld27
        mov     esi, dword ptr [esp + 0x20]

Ld6e:
        /* Compute average: divide sums by count */
        sub     eax, esi
        sar     eax, 0x2
        test    esi, esi
        mov     dword ptr [esp + 0x08], eax  /* count */
        mov     dword ptr [esp + 0x0c], 0x0  /* count_hi = 0 */
        fild    qword ptr [esp + 0x08]       /* load count as double */
        fld     dword ptr [esp + 0x14]       /* sum_x */
        push    edi
        mov     edi, dword ptr [esp + 0x34]  /* param_2 */
        fdiv    st(0), st(1)
        fstp    dword ptr [esp + 0x18]       /* avg_x */
        fld     dword ptr [esp + 0x1c]       /* sum_z */
        fdiv    st(0), st(1)
        fstp    dword ptr [esp + 0x1c]       /* avg_z */
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [edi + 0x4], eax   /* out[1] = avg_z */
        fdivr   dword ptr [esp + 0x20]
        fst     dword ptr [esp + 0x20]       /* store avg_y */
        fld     dword ptr [esp + 0x18]       /* avg_x */
        fstp    dword ptr [edi]              /* out[0] = avg_x */
        fstp    dword ptr [edi + 0x8]        /* out[2] = avg_y */
        jz      Ldc1
        push    esi
        call    FUN_004084e0
        add     esp, 0x4

Ldc1:
        mov     eax, edi
        pop     edi
        pop     esi
        add     esp, 0x28
        ret
    }
}
