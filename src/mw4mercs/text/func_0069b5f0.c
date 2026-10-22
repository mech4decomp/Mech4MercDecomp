/*
 * FUN_0069b5f0 (463 B) — HUD/ABL array-type handler. Switch on DAT_008058ac
 * (1..9) via jump table @ 0x69b7c0; builds an array type object (AblStackHeap
 * vector push), handles element types, and asserts on bad modes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_008058ac;   /* DAT_008058ac */
extern int  g_0080d9bc;   /* DAT_0080d9bc */
extern int  g_008050a0;   /* DAT_008050a0 */
extern int  g_008050a4;   /* DAT_008050a4 */
extern char g_007b5fc0[]; /* DAT_007b5fc0 */
extern char g_007b5fb0[]; /* DAT_007b5fb0 */
extern char g_7998f8[];   /* " ABL: Unable to AblStackHeap->malloc array type " */
extern char g_7998bc[];   /* " ABL: Unable to AblStackHeap->malloc array element Type " */
extern char g_792cdc[];   /* "666???" */
extern int  g_jt_69b7c0[];/* jump table @ 0x69b7c0 */

extern void __cdecl FUN_0064fc30(void);
extern void __cdecl FUN_00562f40(void);
extern void __cdecl FUN_0069b7f0(void);
extern void __cdecl FUN_0064fe70(void);
extern void __cdecl FUN_0064fd60(void);
extern void __cdecl FUN_00562f10(void);
extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_006498f0(void);
extern void __cdecl FUN_00649920(void);
extern void __cdecl FUN_0069ae70(void);
extern void __cdecl FUN_0069b8e0(void);
extern void __cdecl FUN_0069b800(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_0069b5f0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        mov     eax, dword ptr [g_008058ac]
        dec     eax
        cmp     eax, 0x8
        push    edi
        ja      L7AE
        jmp     dword ptr [eax*4 + g_jt_69b7c0]
L60D:
        lea     ecx, [ebp - 0x8]
        push    ecx
        call    FUN_0064fc30
        mov     eax, dword ptr [ebp - 0x8]
        xor     edi, edi
        add     esp, 0x4
        cmp     eax, edi
        jnz     L633
        push    0xd
        call    FUN_00562f40
        add     esp, 0x4
        xor     eax, eax
        pop     edi
        mov     esp, ebp
        pop     ebp
        ret
L633:
        cmp     dword ptr [eax + 0x18], 0x2
        jnz     L781
        push    eax
        call    FUN_0069b7f0
        push    eax
        call    FUN_0064fe70
        mov     dword ptr [ebp - 0x4], eax
        mov     eax, dword ptr [g_008058ac]
        add     esp, 0x8
        cmp     eax, 0xb
        jnz     L779
        push    ebx
        push    esi
        call    FUN_0064fd60
        mov     ebx, eax
        cmp     ebx, edi
        jnz     L678
        push    offset g_7998f8
        push    edi
        call    FUN_00562f10
        add     esp, 0x8
L678:
        mov     esi, ebx
L67A:
        call    FUN_00649150
        push    offset g_007b5fc0
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jz      L6FC
        mov     edx, dword ptr [g_0080d9bc]
        push    edx
        mov     dword ptr [esi + 0x4], 0x3
        mov     dword ptr [esi + 0x8], edi
        mov     dword ptr [esi + 0xc], edi
        call    FUN_0064fe70
        mov     dword ptr [esi + 0x10], eax
        mov     eax, dword ptr [g_008058ac]
        add     esp, 0x4
        dec     eax
        jz      L6CC
        dec     eax
        jnz     L6FC
        cmp     dword ptr [g_008050a0], edi
        jnz     L6FC
        mov     eax, dword ptr [g_008050a4]
        mov     dword ptr [esi + 0x18], eax
        jmp     L712
L6CC:
        lea     ecx, [ebp - 0xc]
        push    ecx
        call    FUN_0064fc30
        mov     eax, dword ptr [ebp - 0xc]
        add     esp, 0x4
        cmp     eax, edi
        jnz     L6E3
        push    0xd
        jmp     L70A
L6E3:
        cmp     dword ptr [eax + 0x18], 0x1
        jnz     L6FC
        mov     edx, dword ptr [eax + 0x3c]
        cmp     edx, dword ptr [g_0080d9bc]
        jnz     L6FC
        mov     eax, dword ptr [eax + 0x1c]
        mov     dword ptr [esi + 0x18], eax
        jmp     L712
L6FC:
        mov     dword ptr [esi + 0x4], edi
        mov     dword ptr [esi + 0x8], edi
        mov     dword ptr [esi + 0xc], edi
        mov     dword ptr [esi + 0x10], edi
        push    0x36
L70A:
        call    FUN_00562f40
        add     esp, 0x4
L712:
        call    FUN_00649150
        push    edi
        push    edi
        push    offset g_007b5fb0
        call    FUN_00649920
        mov     eax, dword ptr [g_008058ac]
        add     esp, 0xc
        cmp     eax, 0x11
        jnz     L759
        call    FUN_0064fd60
        mov     dword ptr [esi + 0x14], eax
        mov     esi, eax
        cmp     esi, edi
        jnz     L74C
        push    offset g_7998bc
        push    edi
        call    FUN_00562f10
        add     esp, 0x8
L74C:
        cmp     dword ptr [g_008058ac], 0x11
        jz      L67A
L759:
        push    0x1e
        push    0xc
        call    FUN_0069ae70
        mov     ecx, dword ptr [ebp - 0x4]
        push    ebx
        mov     dword ptr [esi + 0x14], ecx
        call    FUN_0069b8e0
        add     esp, 0xc
        pop     esi
        mov     dword ptr [ebx + 0x8], eax
        mov     dword ptr [ebp - 0x4], ebx
        pop     ebx
L779:
        mov     eax, dword ptr [ebp - 0x4]
        pop     edi
        mov     esp, ebp
        pop     ebp
        ret
L781:
        push    0x19
        call    FUN_00562f40
        add     esp, 0x4
        xor     eax, eax
        pop     edi
        mov     esp, ebp
        pop     ebp
        ret
L792:
        call    FUN_0069b800
        pop     edi
        mov     esp, ebp
        pop     ebp
        ret
L79C:
        push    offset g_792cdc
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L7AE
        int     3
L7AE:
        push    0x1a
        call    FUN_00562f40
        add     esp, 0x4
        xor     eax, eax
        pop     edi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
