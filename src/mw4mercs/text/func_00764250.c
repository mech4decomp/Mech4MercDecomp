/*
 * FUN_00764250 (426 B) — __cdecl, 4 args. Obfuscated function: real logic
 * interleaved with junk blocks (salc/cmp al,0 skipped by jmp +4, then chains
 * of jmp 0). Calls a function pointer from [arg1] and a couple of helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00765c80(void);
extern void __cdecl FUN_00765e50(void);

extern int g_8bd4f0;

__declspec(naked) void FUN_00764250(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    esi
        push    edi
        jmp     l_skip1
        __emit  0xD6        /* salc (junk, skipped) */
        __emit  0xD6        /* salc (junk, skipped) */
        cmp     al, 0       /* junk, skipped */
    l_skip1:
        jmp     l_c1_1
    l_c1_1:
        jmp     l_c1_2
    l_c1_2:
        jmp     l_c1_3
    l_c1_3:
        jmp     l_c1_4
    l_c1_4:
        jmp     l_c1_5
    l_c1_5:
        jmp     l_c1_6
    l_c1_6:
        jmp     l_c1_7
    l_c1_7:
        jmp     l_c1_8
    l_c1_8:
        jmp     l_c1_9
    l_c1_9:
        jmp     l_c1_10
    l_c1_10:
        jmp     l_c1_11
    l_c1_11:
        jmp     l_c1_12
    l_c1_12:
        jmp     l_c1_13
    l_c1_13:
        jmp     l_c1_14
    l_c1_14:
        jmp     l_c1_15
    l_c1_15:
        jmp     l_c1_16
    l_c1_16:
        jmp     l_c1_17
    l_c1_17:
        jmp     l_c1_18
    l_c1_18:
        jmp     l_c1_19
    l_c1_19:
        jmp     l_c1_20
    l_c1_20:
        jmp     l_c1_21
    l_c1_21:
        jmp     l_c1_22
    l_c1_22:
        jmp     l_c1_23
    l_c1_23:
        jmp     l_c1_24
    l_c1_24:
        jmp     l_c1_25
    l_c1_25:
        jmp     l_c1_26
    l_c1_26:
        jmp     l_c1_27
    l_c1_27:
        mov     eax, dword ptr [ebp + 0x14]
        test    eax, eax
        jne     l_skip2
        mov     eax, 0xb
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    l_skip2:
        jmp     l_skip2b
        __emit  0xD6        /* salc (junk, skipped) */
        __emit  0xD6        /* salc (junk, skipped) */
        cmp     al, 0       /* junk, skipped */
    l_skip2b:
        jmp     l_c2_1
    l_c2_1:
        jmp     l_c2_2
    l_c2_2:
        jmp     l_c2_3
    l_c2_3:
        jmp     l_c2_4
    l_c2_4:
        jmp     l_c2_5
    l_c2_5:
        jmp     l_c2_6
    l_c2_6:
        jmp     l_c2_7
    l_c2_7:
        jmp     l_c2_8
    l_c2_8:
        jmp     l_c2_9
    l_c2_9:
        jmp     l_c2_10
    l_c2_10:
        jmp     l_c2_11
    l_c2_11:
        jmp     l_c2_12
    l_c2_12:
        jmp     l_c2_13
    l_c2_13:
        jmp     l_c2_14
    l_c2_14:
        jmp     l_c2_15
    l_c2_15:
        jmp     l_c2_16
    l_c2_16:
        jmp     l_c2_17
    l_c2_17:
        jmp     l_c2_18
    l_c2_18:
        jmp     l_c2_19
    l_c2_19:
        jmp     l_c2_20
    l_c2_20:
        jmp     l_c2_21
    l_c2_21:
        jmp     l_c2_22
    l_c2_22:
        jmp     l_c2_23
    l_c2_23:
        jmp     l_c2_24
    l_c2_24:
        jmp     l_c2_25
    l_c2_25:
        jmp     l_c2_26
    l_c2_26:
        jmp     l_c2_27
    l_c2_27:
        mov     edi, dword ptr [eax]
        test    edi, edi
        jne     l_skip3
        mov     eax, 0xb
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    l_skip3:
        mov     ecx, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ebp + 0xc]
        lea     eax, [ebp - 4]
        push    eax
        mov     eax, dword ptr [ebp + 8]
        push    ecx
        mov     ecx, dword ptr [g_8bd4f0]
        push    edx
        push    0x97
        push    eax
        push    ecx
        call    FUN_00765c80
        add     esp, 0x18
        mov     esi, eax
        jmp     l_skip3b
        __emit  0xD6        /* salc (junk, skipped) */
        __emit  0xD6        /* salc (junk, skipped) */
        cmp     al, 0       /* junk, skipped */
    l_skip3b:
        jmp     l_c3_1
    l_c3_1:
        jmp     l_c3_2
    l_c3_2:
        jmp     l_c3_3
    l_c3_3:
        jmp     l_c3_4
    l_c3_4:
        jmp     l_c3_5
    l_c3_5:
        jmp     l_c3_6
    l_c3_6:
        jmp     l_c3_7
    l_c3_7:
        jmp     l_c3_8
    l_c3_8:
        jmp     l_c3_9
    l_c3_9:
        jmp     l_c3_10
    l_c3_10:
        jmp     l_c3_11
    l_c3_11:
        jmp     l_c3_12
    l_c3_12:
        jmp     l_c3_13
    l_c3_13:
        jmp     l_c3_14
    l_c3_14:
        jmp     l_c3_15
    l_c3_15:
        jmp     l_c3_16
    l_c3_16:
        jmp     l_c3_17
    l_c3_17:
        jmp     l_c3_18
    l_c3_18:
        jmp     l_c3_19
    l_c3_19:
        jmp     l_c3_20
    l_c3_20:
        jmp     l_c3_21
    l_c3_21:
        jmp     l_c3_22
    l_c3_22:
        jmp     l_c3_23
    l_c3_23:
        jmp     l_c3_24
    l_c3_24:
        jmp     l_c3_25
    l_c3_25:
        jmp     l_c3_26
    l_c3_26:
        jmp     l_c3_27
    l_c3_27:
        test    esi, esi
        jne     l_skip4
        mov     eax, 0xb
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    l_skip4:
        jmp     l_skip4b
        __emit  0xD6        /* salc (junk, skipped) */
        __emit  0xD6        /* salc (junk, skipped) */
        cmp     al, 0       /* junk, skipped */
    l_skip4b:
        jmp     l_c4_1
    l_c4_1:
        jmp     l_c4_2
    l_c4_2:
        jmp     l_c4_3
    l_c4_3:
        jmp     l_c4_4
    l_c4_4:
        jmp     l_c4_5
    l_c4_5:
        jmp     l_c4_6
    l_c4_6:
        jmp     l_c4_7
    l_c4_7:
        jmp     l_c4_8
    l_c4_8:
        jmp     l_c4_9
    l_c4_9:
        jmp     l_c4_10
    l_c4_10:
        jmp     l_c4_11
    l_c4_11:
        jmp     l_c4_12
    l_c4_12:
        jmp     l_c4_13
    l_c4_13:
        jmp     l_c4_14
    l_c4_14:
        jmp     l_c4_15
    l_c4_15:
        jmp     l_c4_16
    l_c4_16:
        jmp     l_c4_17
    l_c4_17:
        jmp     l_c4_18
    l_c4_18:
        jmp     l_c4_19
    l_c4_19:
        jmp     l_c4_20
    l_c4_20:
        jmp     l_c4_21
    l_c4_21:
        jmp     l_c4_22
    l_c4_22:
        jmp     l_c4_23
    l_c4_23:
        jmp     l_c4_24
    l_c4_24:
        jmp     l_c4_25
    l_c4_25:
        jmp     l_c4_26
    l_c4_26:
        jmp     l_c4_27
    l_c4_27:
        push    esi
        call    edi
        add     esp, 4
        mov     edi, eax
        jmp     l_skip5b
        __emit  0xD6        /* salc (junk, skipped) */
        __emit  0xD6        /* salc (junk, skipped) */
        cmp     al, 0       /* junk, skipped */
    l_skip5b:
        jmp     l_c5_1
    l_c5_1:
        jmp     l_c5_2
    l_c5_2:
        jmp     l_c5_3
    l_c5_3:
        jmp     l_c5_4
    l_c5_4:
        jmp     l_c5_5
    l_c5_5:
        jmp     l_c5_6
    l_c5_6:
        jmp     l_c5_7
    l_c5_7:
        jmp     l_c5_8
    l_c5_8:
        jmp     l_c5_9
    l_c5_9:
        jmp     l_c5_10
    l_c5_10:
        jmp     l_c5_11
    l_c5_11:
        jmp     l_c5_12
    l_c5_12:
        jmp     l_c5_13
    l_c5_13:
        jmp     l_c5_14
    l_c5_14:
        jmp     l_c5_15
    l_c5_15:
        jmp     l_c5_16
    l_c5_16:
        jmp     l_c5_17
    l_c5_17:
        jmp     l_c5_18
    l_c5_18:
        jmp     l_c5_19
    l_c5_19:
        jmp     l_c5_20
    l_c5_20:
        jmp     l_c5_21
    l_c5_21:
        jmp     l_c5_22
    l_c5_22:
        jmp     l_c5_23
    l_c5_23:
        jmp     l_c5_24
    l_c5_24:
        jmp     l_c5_25
    l_c5_25:
        jmp     l_c5_26
    l_c5_26:
        jmp     l_c5_27
    l_c5_27:
        mov     edx, dword ptr [g_8bd4f0]
        push    esi
        push    edx
        call    FUN_00765e50
        add     esp, 8
        mov     eax, edi
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
