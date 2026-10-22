/*
 * FUN_10018f42 (1374 B declared range 0x10018F42..0x100194A0).
 * __stdcall (ret 8).
 *
 * The declared range is a gap region containing the main function
 * (0x10018F50) plus two small thunks (0x10019460, 0x10019480) and NOP
 * padding. Transcribed in full so the entire range matches byte-for-byte.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_26924[];
extern char g_2691c[];
extern char g_26918[];
extern char g_26914[];
extern char g_26804[];
extern char g_26910[];
extern char g_2690c[];
extern char g_252f0[];
extern char g_26904[];
extern char g_268f0[];
extern char g_268fc[];
extern char g_268f8[];
extern char g_274ec[];

extern void *g_210dc;   /* IAT slot 0x100210dc */

extern void __cdecl FUN_1000bee0(void);
extern void __cdecl FUN_1000a0f0(void);
extern void __cdecl FUN_1000a120(void);
extern void __cdecl FUN_1001e300(void);
extern void __cdecl FUN_1001e380(void);

__declspec(naked) int __cdecl FUN_10018f42(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        mov     ecx, dword ptr [esp + 8]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        push    1
        push    offset g_26924
        mov     eax, dword ptr [esi + 0x38]
        mov     dword ptr [eax], 0x34
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x1c]
        test    eax, eax
        mov     dword ptr [esp + 0x18], eax
        jne     L_f85
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040283
        pop     ebx
        ret     8
L_f85:
        mov     edx, dword ptr [eax]
        push    1
        push    offset g_2691c
        mov     ecx, eax
        call    dword ptr [edx + 0x1c]
        mov     edi, eax
        test    edi, edi
        jne     L_fa5
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040283
        pop     ebx
        ret     8
L_fa5:
        mov     ebx, dword ptr [esi + 0x38]
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        add     ebx, 0xc
        call    dword ptr [eax + 8]
        mov     edx, dword ptr [eax]
        push    1
        push    offset g_26918
        mov     ecx, eax
        call    dword ptr [edx + 4]
        test    eax, eax
        je      L_fcc
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        jmp     L_fce
L_fcc:
        xor     eax, eax
L_fce:
        mov     dword ptr [ebx], eax
        mov     ebx, dword ptr [esi + 0x38]
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        add     ebx, 0x18
        call    dword ptr [eax + 8]
        mov     edx, dword ptr [eax]
        push    1
        push    offset g_26914
        mov     ecx, eax
        call    dword ptr [edx + 4]
        mov     ebp, eax
        test    ebp, ebp
        je      L_ffa
        mov     eax, dword ptr [ebp]
        mov     ecx, ebp
        call    dword ptr [eax]
        jmp     L_ffc
L_ffa:
        xor     eax, eax
L_ffc:
        test    ebp, ebp
        mov     dword ptr [ebx], eax
        jne     L_1000e
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040282
        pop     ebx
        ret     8
L_1000e:
        mov     ebx, dword ptr [esi + 0x38]
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        add     ebx, 0x1c
        call    dword ptr [edx + 8]
        mov     edx, dword ptr [eax]
        push    1
        push    offset g_26804
        mov     ecx, eax
        call    dword ptr [edx + 4]
        mov     ebp, eax
        test    ebp, ebp
        je      L_10038
        mov     eax, dword ptr [ebp]
        mov     ecx, ebp
        call    dword ptr [eax]
        jmp     L_1003a
L_10038:
        xor     eax, eax
L_1003a:
        test    ebp, ebp
        mov     dword ptr [ebx], eax
        jne     L_1004c
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040282
        pop     ebx
        ret     8
L_1004c:
        mov     ebx, dword ptr [esi + 0x38]
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        add     ebx, 0x30
        call    dword ptr [edx + 8]
        mov     edx, dword ptr [eax]
        push    1
        push    offset g_26910
        mov     ecx, eax
        call    dword ptr [edx + 4]
        mov     ebp, eax
        test    ebp, ebp
        je      L_10080
        mov     eax, dword ptr [ebp]
        mov     ecx, ebp
        call    dword ptr [eax]
        push    eax
        call    dword ptr [g_210dc]
        add     esp, 4
        jmp     L_10082
L_10080:
        xor     eax, eax
L_10082:
        test    ebp, ebp
        mov     dword ptr [ebx], eax
        jne     L_10094
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040282
        pop     ebx
        ret     8
L_10094:
        mov     ebx, dword ptr [esi + 0x38]
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        add     ebx, 0x20
        call    dword ptr [edx + 8]
        mov     edx, dword ptr [eax]
        push    1
        push    offset g_2690c
        mov     ecx, eax
        call    dword ptr [edx + 4]
        test    eax, eax
        je      L_100bb
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        jmp     L_100bd
L_100bb:
        xor     eax, eax
L_100bd:
        mov     dword ptr [ebx], eax
        mov     ebx, dword ptr [esi + 0x38]
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        add     ebx, 0x24
        call    dword ptr [eax + 8]
        mov     edx, dword ptr [eax]
        push    1
        push    offset g_252f0
        mov     ecx, eax
        call    dword ptr [edx + 4]
        mov     ebp, eax
        test    ebp, ebp
        je      L_100e9
        mov     eax, dword ptr [ebp]
        mov     ecx, ebp
        call    dword ptr [eax]
        jmp     L_100eb
L_100e9:
        xor     eax, eax
L_100eb:
        test    ebp, ebp
        mov     dword ptr [ebx], eax
        jne     L_100fd
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040282
        pop     ebx
        ret     8
L_100fd:
        mov     ebx, dword ptr [esi + 0x38]
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        add     ebx, 0x10
        call    dword ptr [edx + 8]
        mov     edx, dword ptr [eax]
        push    1
        push    offset g_26904
        mov     ecx, eax
        call    dword ptr [edx + 4]
        mov     ebp, eax
        test    ebp, ebp
        je      L_10127
        mov     eax, dword ptr [ebp]
        mov     ecx, ebp
        call    dword ptr [eax]
        jmp     L_10129
L_10127:
        xor     eax, eax
L_10129:
        test    ebp, ebp
        mov     dword ptr [ebx], eax
        jne     L_1013b
L_1012f:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040282
        pop     ebx
        ret     8
L_1013b:
        lea     ebx, [esi + 0x174]
        push    ebx
        push    edi
        call    FUN_1000bee0
        mov     eax, dword ptr [ebx + 0xc]
        xor     ebp, ebp
        add     esp, 8
        cmp     eax, ebp
        jbe     L_10158
        mov     ebx, dword ptr [ebx]
        jmp     L_1015d
L_10158:
        mov     ebx, offset g_274ec
L_1015d:
        mov     ecx, dword ptr [esi + 0x38]
        push    1
        push    offset g_268f0
        mov     dword ptr [ecx + 0x14], ebx
        mov     ebx, dword ptr [esp + 0x20]
        mov     ecx, ebx
        mov     edx, dword ptr [ebx]
        call    dword ptr [edx + 0x1c]
        cmp     eax, ebp
        je      L_10195
L_10179:
        mov     ecx, dword ptr [esi + 0x38]
        push    1
        push    offset g_268f0
        mov     edx, dword ptr [ecx + 8]
        inc     edx
        mov     dword ptr [ecx + 8], edx
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x2c]
        cmp     eax, ebp
        jne     L_10179
L_10195:
        mov     eax, dword ptr [esi + 0x38]
        mov     eax, dword ptr [eax + 8]
        cmp     eax, ebp
        jbe     L_10288
        lea     ecx, [eax*4]
        push    ecx
        call    FUN_1000a0f0
        mov     edx, dword ptr [esi + 0x38]
        mov     dword ptr [edx + 0x2c], eax
        mov     eax, dword ptr [esi + 0x38]
        cmp     dword ptr [eax + 0x2c], ebp
        jne     L_101ca
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x8007000e
        pop     ebx
        ret     8
L_101ca:
        mov     eax, dword ptr [eax + 8]
        shl     eax, 2
        push    eax
        call    FUN_1000a0f0
        cmp     eax, ebp
        mov     dword ptr [esi + 0x210], eax
        jne     L_101ec
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x8007000e
        pop     ebx
        ret     8
L_101ec:
        mov     edx, dword ptr [ebx]
        push    1
        push    offset g_268f0
        mov     ecx, ebx
        call    dword ptr [edx + 0x1c]
        mov     edi, eax
        cmp     edi, ebp
        je      L_10288
        xor     ebx, ebx
L_10206:
        push    0x98
        call    FUN_1000a120
        add     esp, 4
        cmp     eax, ebp
        je      L_1022e
        mov     dword ptr [eax], ebp
        mov     dword ptr [eax + 4], ebp
        mov     dword ptr [eax + 8], ebp
        mov     dword ptr [eax + 0xc], ebp
        mov     dword ptr [eax + 0x10], ebp
        mov     dword ptr [eax + 0x14], 0x400
        jmp     L_10230
L_1022e:
        xor     eax, eax
L_10230:
        mov     ecx, dword ptr [esi + 0x210]
        mov     dword ptr [ebx + ecx], eax
        mov     edx, dword ptr [esi + 0x210]
        mov     eax, dword ptr [ebx + edx]
        push    eax
        push    edi
        call    FUN_1000bee0
        mov     ecx, dword ptr [esi + 0x210]
        add     esp, 8
        mov     eax, dword ptr [ebx + ecx]
        cmp     dword ptr [eax + 0xc], ebp
        jbe     L_1025e
        mov     eax, dword ptr [eax]
        jmp     L_10263
L_1025e:
        mov     eax, offset g_274ec
L_10263:
        mov     edx, dword ptr [esi + 0x38]
        push    1
        push    offset g_268f0
        add     ebx, 4
        mov     ecx, dword ptr [edx + 0x2c]
        mov     dword ptr [ecx + ebx - 4], eax
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x2c]
        mov     edi, eax
        cmp     edi, ebp
        jne     L_10206
        mov     ebx, dword ptr [esp + 0x18]
L_10288:
        mov     eax, dword ptr [ebx]
        push    1
        push    offset g_268fc
        mov     ecx, ebx
        call    dword ptr [eax + 0x1c]
        cmp     eax, ebp
        je      L_102b6
L_1029a:
        mov     ecx, dword ptr [esi + 0x38]
        push    1
        push    offset g_268fc
        mov     edx, dword ptr [ecx + 4]
        inc     edx
        mov     dword ptr [ecx + 4], edx
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x2c]
        cmp     eax, ebp
        jne     L_1029a
L_102b6:
        mov     eax, dword ptr [esi + 0x38]
        mov     eax, dword ptr [eax + 4]
        cmp     eax, ebp
        jbe     L_10450
        lea     ecx, [eax + eax*4]
        shl     ecx, 2
        push    ecx
        call    FUN_1000a0f0
        mov     edx, dword ptr [esi + 0x38]
        mov     dword ptr [edx + 0x28], eax
        mov     eax, dword ptr [esi + 0x38]
        cmp     dword ptr [eax + 0x28], ebp
        jne     L_102ea
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x8007000e
        pop     ebx
        ret     8
L_102ea:
        mov     eax, dword ptr [eax + 4]
        shl     eax, 2
        push    eax
        call    FUN_1000a0f0
        cmp     eax, ebp
        mov     dword ptr [esi + 0x20c], eax
        jne     L_1030c
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x8007000e
        pop     ebx
        ret     8
L_1030c:
        mov     edx, dword ptr [ebx]
        push    1
        push    offset g_268fc
        mov     ecx, ebx
        call    dword ptr [edx + 0x1c]
        mov     edi, eax
        cmp     edi, ebp
        je      L_10450
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x18], ebp
L_1032c:
        mov     eax, dword ptr [esi + 0x38]
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        mov     ebp, dword ptr [eax + 0x28]
        mov     eax, dword ptr [esp + 0x18]
        add     ebp, eax
        call    dword ptr [edx + 8]
        mov     edx, dword ptr [eax]
        push    1
        push    offset g_252f0
        mov     ecx, eax
        call    dword ptr [edx + 4]
        mov     ebx, eax
        test    ebx, ebx
        je      L_1035b
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax]
        jmp     L_1035d
L_1035b:
        xor     eax, eax
L_1035d:
        test    ebx, ebx
        mov     dword ptr [ebp + 4], eax
        je      L_1012f
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 8]
        mov     edx, dword ptr [eax]
        push    1
        push    offset g_26910
        mov     ecx, eax
        call    dword ptr [edx + 4]
        mov     ebx, eax
        test    ebx, ebx
        je      L_1038b
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax]
        jmp     L_1038d
L_1038b:
        xor     eax, eax
L_1038d:
        test    ebx, ebx
        mov     dword ptr [ebp + 8], eax
        je      L_1012f
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 8]
        mov     edx, dword ptr [eax]
        push    1
        push    offset g_268f8
        mov     ecx, eax
        call    dword ptr [edx + 4]
        xor     ebx, ebx
        cmp     eax, ebx
        je      L_103bb
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        jmp     L_103bd
L_103bb:
        xor     eax, eax
L_103bd:
        push    0x98
        mov     dword ptr [ebp + 0xc], eax
        call    FUN_1000a120
        add     esp, 4
        cmp     eax, ebx
        je      L_103e8
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 4], ebx
        mov     dword ptr [eax + 8], ebx
        mov     dword ptr [eax + 0xc], ebx
        mov     dword ptr [eax + 0x10], ebx
        mov     dword ptr [eax + 0x14], 0x400
        jmp     L_103ea
L_103e8:
        xor     eax, eax
L_103ea:
        mov     ecx, dword ptr [esi + 0x20c]
        mov     ebx, dword ptr [esp + 0x14]
        mov     dword ptr [ebx + ecx], eax
        mov     edx, dword ptr [esi + 0x20c]
        mov     eax, dword ptr [ebx + edx]
        push    eax
        push    edi
        call    FUN_1000bee0
        mov     ecx, dword ptr [esi + 0x20c]
        add     esp, 8
        mov     eax, dword ptr [ebx + ecx]
        mov     ecx, dword ptr [esp + 0x18]
        add     ecx, 0x14
        add     ebx, 4
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        mov     dword ptr [esp + 0x14], ebx
        jbe     L_10430
        mov     eax, dword ptr [eax]
        jmp     L_10435
L_10430:
        mov     eax, offset g_274ec
L_10435:
        mov     dword ptr [ebp + 0x10], eax
        mov     edx, dword ptr [edi]
        push    1
        push    offset g_268fc
        mov     ecx, edi
        call    dword ptr [edx + 0x2c]
        mov     edi, eax
        test    edi, edi
        jne     L_1032c
L_10450:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     8

        nop
        nop
        nop
        nop
        nop
        nop
        nop

        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 4]
        push    eax
        push    ecx
        call    FUN_1001e300
        ret     8

        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 4]
        push    eax
        push    ecx
        call    FUN_1001e380
        ret     8

        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
    }
}
