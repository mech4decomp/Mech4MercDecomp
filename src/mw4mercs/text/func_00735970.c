/*
 * FUN_00735970 (496 B) — __thiscall (ecx = this), no params.
 *
 * Input/keyboard mapping routine: indexes a table at 0x8b7ad0 based on
 * packed bitfields in [this+4]/[this+6], checks a cached key state at
 * 0x8b2804, and dispatches through FUN_00747ac0 / FUN_00735230 /
 * FUN_007539e0 / FUN_006f4940.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_008b7ad0;
extern int g_008b2804;
extern unsigned short g_008b27f8;
extern unsigned short g_008b27fa;
extern unsigned short g_008b27fe;
extern int g_008b27fc;
extern int g_0087c2a0;
extern int g_0085a230;
extern int g_00849320;

extern void __cdecl FUN_00747ac0(void);
extern void __cdecl FUN_00735230(void);
extern void __cdecl FUN_007539e0(void);
extern void __cdecl FUN_006f4940(void);

__declspec(naked) int __cdecl FUN_00735970(void)
{
    __asm {
        sub     esp, 0x80
        push    ebx
        push    ebp
        mov     ebp, ecx
        xor     ebx, ebx
        mov     bx, word ptr [ebp + 6]
        xor     edx, edx
        mov     dx, word ptr [ebp + 4]
        push    esi
        push    edi
        lea     edi, [esp + 0x14]
        mov     eax, ebx
        and     eax, 0xffff
        mov     esi, eax
        shr     esi, 7
        mov     ecx, edx
        shr     ecx, 0xa
        and     ecx, 7
        and     esi, 1
        lea     ecx, [esi + ecx*2]
        shr     eax, 0xe
        lea     eax, [eax + ecx*4]
        mov     ecx, eax
        shl     ecx, 5
        sub     ecx, eax
        lea     esi, [ecx*4 + g_008b7ad0]
        mov     ecx, 0x1f
        rep     movsd
        cmp     dword ptr [esp + 0x68], 0x20
        mov     dword ptr [esp + 0x10], edx
        jne     L_735a19
        cmp     dword ptr [esp + 0x6c], 0xff0000
        jne     L_735a19
        test    bh, 8
        jne     L_7359fd
        mov     al, bl
        test    al, 1
        jne     L_7359fd
        xor     edx, edx
        mov     dx, word ptr [ebp + 2]
        xor     eax, eax
        mov     ax, word ptr [ebp]
        push    edx
        push    eax
        call    FUN_00747ac0
        cmp     eax, 1
        mov     edx, dword ptr [esp + 0x10]
        jne     L_735a19
L_7359fd:
        test    byte ptr [esp + 0x60], 1
        jne     L_735a19
        mov     eax, dword ptr [ebp + 8]
        test    eax, eax
        je      L_735a19
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 0xc], eax
        pop     ebp
        pop     ebx
        add     esp, 0x80
        ret
L_735a19:
        mov     eax, dword ptr [g_008b2804]
        test    eax, eax
        je      L_735a71
        mov     cx, word ptr [ebp]
        cmp     cx, word ptr [g_008b27f8]
        jne     L_735a71
        mov     cx, word ptr [ebp + 2]
        cmp     cx, word ptr [g_008b27fa]
        jne     L_735a71
        xor     bx, word ptr [g_008b27fe]
        test    ebx, 0x881
        jne     L_735a71
        xor     edx, dword ptr [g_008b27fc]
        test    edx, 0x1c08
        jne     L_735a71
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 0xc], eax
        pop     ebp
        mov     dword ptr [g_008b2804], 0
        pop     ebx
        add     esp, 0x80
        ret
L_735a71:
        mov     bl, byte ptr [ebp + 6]
        and     bl, 1
        mov     dword ptr [esp + 0x14], 0x7c
        jne     L_735aa9
        xor     edx, edx
        mov     dx, word ptr [ebp + 2]
        xor     eax, eax
        mov     ax, word ptr [ebp]
        push    edx
        push    eax
        call    FUN_00747ac0
        cmp     eax, 1
        jle     L_735aa9
        mov     eax, dword ptr [g_0087c2a0]
        test    eax, eax
        je      L_735aa9
        mov     eax, 0x20000
        jmp     L_735aab
L_735aa9:
        xor     eax, eax
L_735aab:
        or      eax, 0x1007
        test    bl, bl
        mov     dword ptr [esp + 0x18], eax
        jne     L_735ae0
        xor     ecx, ecx
        mov     cx, word ptr [ebp + 2]
        xor     edx, edx
        mov     dx, word ptr [ebp]
        push    ecx
        push    edx
        call    FUN_00747ac0
        cmp     eax, 1
        jle     L_735ae0
        mov     eax, dword ptr [g_0087c2a0]
        test    eax, eax
        je      L_735ae0
        mov     eax, 0x400008
        jmp     L_735ae2
L_735ae0:
        xor     eax, eax
L_735ae2:
        or      eax, 0x1800
        test    bl, bl
        mov     dword ptr [esp + 0x7c], eax
        je      L_735af9
        mov     dword ptr [esp + 0x2c], 1
        jmp     L_735b10
L_735af9:
        xor     eax, eax
        mov     ax, word ptr [ebp + 2]
        xor     ecx, ecx
        mov     cx, word ptr [ebp]
        push    eax
        push    ecx
        call    FUN_00747ac0
        mov     dword ptr [esp + 0x2c], eax
L_735b10:
        xor     edx, edx
        mov     dx, word ptr [ebp]
        xor     eax, eax
        mov     ax, word ptr [ebp + 2]
        push    0
        lea     ecx, [ebp + 0xc]
        push    ecx
        mov     dword ptr [esp + 0x28], edx
        lea     edx, [esp + 0x1c]
        mov     dword ptr [esp + 0x24], eax
        mov     eax, dword ptr [g_0085a230]
        push    edx
        push    eax
        call    FUN_00735230
        push    1
        push    2
        push    0
        mov     ecx, ebp
        call    FUN_007539e0
        mov     ecx, dword ptr [g_00849320]
        push    eax
        push    ecx
        call    FUN_006f4940
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x80
        ret
    }
}
