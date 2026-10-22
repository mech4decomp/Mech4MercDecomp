/*
 * In-.text data block 0x764090 (440 B) — single __cdecl function (4 params:
 * [ebp+8], [ebp+0xc], [ebp+0x10], [ebp+0x14]). Uses the fn ptrs at
 * 0x76b0c0/0x76b0c8/0x76b0b8 and the global 0x8bd4f0 to build/query a
 * record; on success (result == 0xa) allocates an 8-byte object via
 * FUN_00764650 and stores two pointers into it.
 *
 * NOTE: the function contains four identical `EB 04` + 4 data bytes
 * (D6 D6 3C 00) + a 27-instruction `EB 00` (jmp +0) NOP-sled. The `EB 04`
 * is a real short jump over the 4 data bytes; the `EB 00` chain is a
 * compiler-emitted jump sled (each jumps to the immediately following
 * instruction). The 4 data bytes are emitted raw (they are not valid code).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76B0C0;
extern void *g_76B0C8;
extern void *g_76B0B8;
extern int g_8BD4F0;
extern void __cdecl FUN_00765C80(void);
extern void __cdecl FUN_00765E50(void);
extern void __cdecl FUN_00764650(void);

__declspec(naked) void FUN_00764090(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0x10]
        push    ebx
        push    esi
        push    edi
        test    eax, eax
        jne     L7640A4
        xor     eax, eax
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
L7640A4:
        mov     eax, dword ptr [ebp + 8]
        push    eax
        call    dword ptr [g_76B0C0]
        mov     edi, eax
        jmp     L7640B6
        __emit  0xD6            /* 4 data bytes (salc/salc/cmp al,0 misdecode) */
        __emit  0xD6
        __emit  0x3C
        __emit  0x00
L7640B6: jmp L7640B8
L7640B8: jmp L7640BA
L7640BA: jmp L7640BC
L7640BC: jmp L7640BE
L7640BE: jmp L7640C0
L7640C0: jmp L7640C2
L7640C2: jmp L7640C4
L7640C4: jmp L7640C6
L7640C6: jmp L7640C8
L7640C8: jmp L7640CA
L7640CA: jmp L7640CC
L7640CC: jmp L7640CE
L7640CE: jmp L7640D0
L7640D0: jmp L7640D2
L7640D2: jmp L7640D4
L7640D4: jmp L7640D6
L7640D6: jmp L7640D8
L7640D8: jmp L7640DA
L7640DA: jmp L7640DC
L7640DC: jmp L7640DE
L7640DE: jmp L7640E0
L7640E0: jmp L7640E2
L7640E2: jmp L7640E4
L7640E4: jmp L7640E6
L7640E6: jmp L7640E8
L7640E8: jmp L7640EA
L7640EA: jmp L7640EC
L7640EC:
        test    edi, edi
        jne     L7640F5
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
L7640F5:
        push    0x7b794c
        push    edi
        call    dword ptr [g_76B0C8]
        mov     esi, eax
        test    esi, esi
        jne     L764115
        push    edi
        call    dword ptr [g_76B0B8]
        xor     eax, eax
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
L764115:
        mov     eax, dword ptr [ebp + 0xc]
        lea     ecx, [ebp + 8]
        push    ecx
        mov     ecx, dword ptr [g_8BD4F0]
        lea     edx, [ebp + 0x10]
        push    4
        push    edx
        push    0x96
        push    eax
        push    ecx
        call    FUN_00765C80
        add     esp, 0x18
        mov     ebx, eax
        jmp     L76413F
        __emit  0xD6            /* 4 data bytes (salc/salc/cmp al,0 misdecode) */
        __emit  0xD6
        __emit  0x3C
        __emit  0x00
L76413F: jmp L764141
L764141: jmp L764143
L764143: jmp L764145
L764145: jmp L764147
L764147: jmp L764149
L764149: jmp L76414B
L76414B: jmp L76414D
L76414D: jmp L76414F
L76414F: jmp L764151
L764151: jmp L764153
L764153: jmp L764155
L764155: jmp L764157
L764157: jmp L764159
L764159: jmp L76415B
L76415B: jmp L76415D
L76415D: jmp L76415F
L76415F: jmp L764161
L764161: jmp L764163
L764163: jmp L764165
L764165: jmp L764167
L764167: jmp L764169
L764169: jmp L76416B
L76416B: jmp L76416D
L76416D: jmp L76416F
L76416F: jmp L764171
L764171: jmp L764173
L764173: jmp L764175
L764175:
        test    ebx, ebx
        jne     L76417E
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
L76417E:
        push    ebx
        call    esi
        add     esp, 4
        mov     dword ptr [ebp + 0xc], eax
        jmp     L76418D
        __emit  0xD6            /* 4 data bytes (salc/salc/cmp al,0 misdecode) */
        __emit  0xD6
        __emit  0x3C
        __emit  0x00
L76418D: jmp L76418F
L76418F: jmp L764191
L764191: jmp L764193
L764193: jmp L764195
L764195: jmp L764197
L764197: jmp L764199
L764199: jmp L76419B
L76419B: jmp L76419D
L76419D: jmp L76419F
L76419F: jmp L7641A1
L7641A1: jmp L7641A3
L7641A3: jmp L7641A5
L7641A5: jmp L7641A7
L7641A7: jmp L7641A9
L7641A9: jmp L7641AB
L7641AB: jmp L7641AD
L7641AD: jmp L7641AF
L7641AF: jmp L7641B1
L7641B1: jmp L7641B3
L7641B3: jmp L7641B5
L7641B5: jmp L7641B7
L7641B7: jmp L7641B9
L7641B9: jmp L7641BB
L7641BB: jmp L7641BD
L7641BD: jmp L7641BF
L7641BF: jmp L7641C1
L7641C1: jmp L7641C3
L7641C3:
        mov     edx, dword ptr [g_8BD4F0]
        push    ebx
        push    edx
        call    FUN_00765E50
        mov     eax, dword ptr [ebp + 0xc]
        add     esp, 8
        cmp     eax, 0xa
        je      L7641E9
        push    edi
        call    dword ptr [g_76B0B8]
        xor     eax, eax
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
L7641E9:
        push    5
        push    8
        call    FUN_00764650
        add     esp, 8
        mov     dword ptr [eax], esi
        mov     dword ptr [eax + 4], edi
        jmp     L764200
        __emit  0xD6            /* 4 data bytes (salc/salc/cmp al,0 misdecode) */
        __emit  0xD6
        __emit  0x3C
        __emit  0x00
L764200: jmp L764202
L764202: jmp L764204
L764204: jmp L764206
L764206: jmp L764208
L764208: jmp L76420A
L76420A: jmp L76420C
L76420C: jmp L76420E
L76420E: jmp L764210
L764210: jmp L764212
L764212: jmp L764214
L764214: jmp L764216
L764216: jmp L764218
L764218: jmp L76421A
L76421A: jmp L76421C
L76421C: jmp L76421E
L76421E: jmp L764220
L764220: jmp L764222
L764222: jmp L764224
L764224: jmp L764226
L764226: jmp L764228
L764228: jmp L76422A
L76422A: jmp L76422C
L76422C: jmp L76422E
L76422E: jmp L764230
L764230: jmp L764232
L764232: jmp L764234
L764234: jmp L764236
L764236:
        mov     ecx, dword ptr [ebp + 0x14]
        test    ecx, ecx
        je      L764243
        mov     dword ptr [ecx], 8
L764243:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
    }
}
