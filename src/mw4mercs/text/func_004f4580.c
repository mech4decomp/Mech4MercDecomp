/*
 * FUN_004f4580 (247 B) — MLR/Adept app core constructor/init. __thiscall
 * (ECX=this), RET 0x10 (4 args). Sets up vtable 0x77529c, initializes
 * members, and conditionally calls FUN_004f4780 / FUN_004d6490 /
 * FUN_004f3b00 based on FPU comparison and a member value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007db090;
extern float g_0076c5b0;
extern int g_007dab44;
extern int g_007dab40;

extern void FUN_004d9940(void);
extern void FUN_004f4780(void);
extern void FUN_004d6490(void);
extern void FUN_004f3b00(void);

__declspec(naked) void FUN_004f4580(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x10]
        mov     edx, dword ptr [esp+0x4]
        sub     esp, 0x60
        push    ebx
        push    esi
        mov     esi, dword ptr [esp+0x70]
        push    edi
        mov     ebx, ecx
        mov     ecx, dword ptr [esp+0x78]
        push    eax
        push    ecx
        push    esi
        push    edx
        mov     ecx, ebx
        call    FUN_004d9940
        mov     edi, dword ptr [ebx+0x10]
        mov     edx, dword ptr [g_007db090]
        mov     ecx, dword ptr [esi+0x60]
        xor     eax, eax
        mov     word ptr [ebx+0x176], ax
        mov     byte ptr [ebx+0x168], al
        mov     dword ptr [ebx+0x170], eax
        mov     eax, dword ptr [ebx+0x18]
        or      edi, 0x40
        cmp     eax, edx
        mov     word ptr [ebx+0x174], 0xffff
        mov     dword ptr [ebx], 0x77529c
        mov     dword ptr [ebx+0x10], edi
        mov     dword ptr [ebx+0x16c], ecx
        jnz     end
        fld     dword ptr [esi+0x50]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L4616
        __emit 0x8B  /* __emit: MSVC6 encodes mov ecx,[0xD8] as immediate load, not memory deref; encode 8B 0D D8 00 00 00 */
        __emit 0x0D
        __emit 0xD8
        __emit 0x00
        __emit 0x00
        __emit 0x00
        add     ecx, 0x20
        push    ecx
        mov     ecx, ebx
        call    FUN_004f4780
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        add     esp, 0x60
        ret     0x10
L4616:
        cmp     ecx, -1
        jz      end
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        push    ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_004d6490
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        lea     edi, [esp+0xc]
        rep     movsd
        lea     ecx, [esp+0x3c]
        push    ecx
        mov     ecx, eax
        call    FUN_004f3b00
        mov     esi, eax
        mov     ecx, 0xc
        lea     edi, [esp+0xc]
        lea     edx, [esp+0xc]
        rep     movsd
        push    edx
        mov     ecx, ebx
        call    FUN_004f4780
end:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        add     esp, 0x60
        ret     0x10
    }
}
