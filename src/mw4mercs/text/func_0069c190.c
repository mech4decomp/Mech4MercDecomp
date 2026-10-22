/*
 * FUN_0069c190 (652 B) — HUD/ABL case-item handler. Allocates a case item via
 * the AblStackHeap vector (FUN_006f3c80 / FUN_004084d0 / FUN_004084e0), links
 * it into a list, then fills its value based on DAT_008058ac mode (int/char/
 * array element).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_008058b8;   /* DAT_008058b8 (AblStackHeap*) */
extern int  g_008058ac;   /* DAT_008058ac */
extern int  g_0080da28;   /* DAT_0080da28 */
extern char g_007f3a54[]; /* DAT_007f3a54 */
extern int  g_008050a0;   /* DAT_008050a0 */
extern int  g_008050a4;   /* DAT_008050a4 */
extern int  g_0080d9bc;   /* DAT_0080d9bc */
extern int  g_0080d9b8;   /* DAT_0080d9b8 */
extern char g_0080da38[]; /* DAT_0080da38 */
extern char g_799998[];   /* " ABL: Unable to AblStackHeap->malloc case item " */

extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00562f10(void);
extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_0064ff50(void);
extern void __cdecl FUN_00650120(void);
extern void __cdecl FUN_00649ec0(void);
extern void __cdecl FUN_00562f40(void);
extern void __cdecl FUN_0064fc30(void);

__declspec(naked) void FUN_0069c190(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    ebp
        mov     ebp, dword ptr [g_008058b8]
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        push    esi
        push    edi
        jz      L2A4
        push    eax
        push    0xc
        call    FUN_006f3c80
        mov     edi, dword ptr [ebp + 0x14]
        mov     edx, eax
        cmp     edi, dword ptr [ebp + 0x18]
        mov     dword ptr [esp + 0x10], edx
        jz      L1CF
        test    edi, edi
        jz      L1C4
        mov     dword ptr [edi], edx
L1C4:
        add     edi, 0x4
        mov     dword ptr [ebp + 0x14], edi
        jmp     L27B
L1CF:
        mov     esi, dword ptr [ebp + 0x10]
        mov     eax, edi
        sub     eax, esi
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x14], 0x1
        mov     dword ptr [esp + 0x18], eax
        lea     ecx, [esp + 0x14]
        jc      L1F2
        lea     ecx, [esp + 0x18]
L1F2:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x18], ecx
        jz      L214
        lea     eax, [ecx*4]
        push    eax
        call    FUN_004084d0
        mov     edx, dword ptr [esp + 0x14]
        add     esp, 0x4
        mov     ebx, eax
        jmp     L216
L214:
        xor     ebx, ebx
L216:
        mov     ecx, edi
        sub     ecx, esi
        sar     ecx, 0x2
        test    ecx, ecx
        mov     eax, ebx
        jle     L236
        mov     edx, esi
        sub     edx, ebx
L227:
        mov     esi, dword ptr [edx + eax]
        mov     dword ptr [eax], esi
        add     eax, 0x4
        dec     ecx
        jnz     L227
        mov     edx, dword ptr [esp + 0x10]
L236:
        test    eax, eax
        jz      L23C
        mov     dword ptr [eax], edx
L23C:
        lea     esi, [eax + 0x4]
        mov     eax, edi
        sub     eax, edi
        sar     eax, 0x2
        test    eax, eax
        jle     L257
        sub     edi, esi
L24C:
        mov     ecx, dword ptr [edi + esi]
        mov     dword ptr [esi], ecx
        add     esi, 0x4
        dec     eax
        jnz     L24C
L257:
        mov     eax, dword ptr [ebp + 0x10]
        test    eax, eax
        jz      L267
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L267:
        mov     edx, dword ptr [esp + 0x18]
        lea     eax, [ebx + edx*4]
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [ebp + 0x10], ebx
        mov     dword ptr [ebp + 0x14], esi
        mov     dword ptr [ebp + 0x18], eax
L27B:
        test    edx, edx
        mov     edi, edx
        jnz     L290
L281:
        push    offset g_799998
        push    0x0
        call    FUN_00562f10
        add     esp, 0x8
L290:
        mov     eax, dword ptr [esp + 0x20]
        cmp     dword ptr [eax], 0x0
        jz      L2A8
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ecx + 0x8], edi
        jmp     L2AE
L2A4:
        xor     edi, edi
        jmp     L281
L2A8:
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [edx], edi
L2AE:
        mov     dword ptr [eax], edi
        mov     eax, dword ptr [esp + 0x28]
        inc     dword ptr [eax]
        mov     eax, dword ptr [g_008058ac]
        mov     esi, 0x9
        xor     bl, bl
        cmp     eax, esi
        mov     dword ptr [edi + 0x8], 0x0
        jz      L2D2
        cmp     eax, 0x8
        jnz     L2E0
L2D2:
        mov     esi, eax
        mov     bl, 0x1
        call    FUN_00649150
        mov     eax, dword ptr [g_008058ac]
L2E0:
        cmp     eax, 0x2
        jnz     L352
        mov     eax, dword ptr [g_0080da28]
        push    eax
        push    offset g_007f3a54
        call    FUN_0064ff50
        add     esp, 0x8
        test    eax, eax
        jnz     L30E
        push    offset g_0080da28
        push    offset g_007f3a54
        call    FUN_00650120
        add     esp, 0x8
L30E:
        push    eax
        call    FUN_00649ec0
        mov     eax, dword ptr [g_008050a0]
        add     esp, 0x4
        test    eax, eax
        jnz     L33B
        cmp     esi, 0x9
        mov     eax, dword ptr [g_008050a4]
        jz      L32C
        neg     eax
L32C:
        mov     dword ptr [edi], eax
        mov     eax, dword ptr [g_0080d9bc]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
L33B:
        push    0x15
        call    FUN_00562f40
        mov     eax, dword ptr [g_0080d9bc]
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
L352:
        cmp     eax, 0x1
        jnz     L400
        lea     ecx, [esp + 0x24]
        push    ecx
        call    FUN_0064fc30
        mov     edx, dword ptr [esp + 0x28]
        push    edx
        call    FUN_00649ec0
        mov     ecx, dword ptr [esp + 0x2c]
        add     esp, 0x8
        test    ecx, ecx
        jnz     L381
        push    0xd
        jmp     L407
L381:
        cmp     dword ptr [ecx + 0x18], 0x1
        jz      L38B
        push    0x16
        jmp     L407
L38B:
        mov     edx, dword ptr [ecx + 0x3c]
        mov     eax, dword ptr [g_0080d9bc]
        cmp     edx, eax
        jnz     L3AB
        cmp     esi, 0x9
        mov     ecx, dword ptr [ecx + 0x1c]
        jz      L3A1
        neg     ecx
L3A1:
        mov     dword ptr [edi], ecx
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
L3AB:
        cmp     edx, dword ptr [g_0080d9b8]
        jnz     L3D8
        test    bl, bl
        jz      L3C5
        push    0x15
        call    FUN_00562f40
        mov     ecx, dword ptr [esp + 0x28]
        add     esp, 0x4
L3C5:
        movsx   eax, byte ptr [ecx + 0x1c]
        mov     dword ptr [edi], eax
        mov     eax, dword ptr [g_0080d9b8]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
L3D8:
        cmp     dword ptr [edx + 0x4], 0x2
        jnz     L40F
        test    bl, bl
        jz      L3F0
        push    0x15
        call    FUN_00562f40
        mov     ecx, dword ptr [esp + 0x28]
        add     esp, 0x4
L3F0:
        mov     edx, dword ptr [ecx + 0x1c]
        mov     eax, dword ptr [ecx + 0x3c]
        mov     dword ptr [edi], edx
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
L400:
        cmp     eax, 0x4
        jz      L40F
        push    0x15
L407:
        call    FUN_00562f40
        add     esp, 0x4
L40F:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_0080da38
        pop     ebx
        add     esp, 0xc
        ret
    }
}
