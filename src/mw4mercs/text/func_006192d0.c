/*
 * FUN_006192d0 (473 B) — __thiscall (ECX = this), RET 8 (2 stack params).
 *
 * Iterates a collection, conditionally building entries and calling
 * helpers, with a cleanup path at the end.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *g_7dab44;
extern int  g_7dab40;
extern int *g_7db090;

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004cc3c0(void);
extern void __cdecl FUN_004c8eb0(void);
extern void __cdecl FUN_00595b60(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004c8e90(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void __stdcall FUN_006192d0(void *param1, void *param2)
{
    __asm {
        sub     esp, 0x60
        mov     eax, dword ptr [g_7dab44]
        mov     edx, dword ptr [g_7dab40]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x14]
        xor     edx, 0x85739531
        mov     byte ptr [esp + 0x13], 0x0
        jnz     L_9324
        push    0x1c18
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_9312
        mov     ecx, eax
        call    FUN_004cc3c0
        jmp     L_9314
L_9312:
        xor     eax, eax
L_9314:
        push    0x5
        push    eax
        call    FUN_004c8eb0
        add     esp, 0x8
        mov     byte ptr [esp + 0x13], 0x1
L_9324:
        mov     eax, dword ptr [g_7dab44]
        mov     eax, dword ptr [eax]
        mov     esi, dword ptr [g_7dab40]
        mov     ecx, dword ptr [esp + 0x78]
        xor     eax, esi
        mov     edx, dword ptr [eax + 0x44]
        xor     edx, 0x85739531
        push    ecx
        mov     ecx, dword ptr [edx + 0x34]
        call    FUN_00595b60
        mov     ebp, dword ptr [esp + 0x74]
        cmp     ebp, 0x1
        mov     esi, eax
        mov     ebx, dword ptr [esi + 0x40]
        jnz     L_9358
        inc     ebx
L_9358:
        add     edi, 0x40
        push    edi
        lea     ecx, [esp + 0x1c]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x18], 0x77a38c
        mov     dword ptr [esp + 0x78], 0x0
        xor     edi, edi
        call    FUN_00416cc0
        test    eax, eax
        jz      L_9441
L_9388:
        mov     esi, dword ptr [esi + 0x40]
L_938b:
        cmp     edi, esi
        jg      L_9441
        mov     eax, dword ptr [eax + 0x10]
        test    eax, eax
        jz      L_9428
        cmp     edi, 0x3
        jg      L_93aa
        cmp     ebp, 0x1
        jz      L_93af
        jmp     L_9428
L_93aa:
        cmp     ebp, 0x2
        jnz     L_9428
L_93af:
        mov     cx, word ptr [eax + 0x18]
        mov     dx, word ptr [eax + 0x1a]
        push    0x1
        lea     eax, [esp + 0x78]
        mov     word ptr [esp + 0x78], cx
        push    eax
        lea     ecx, [esp + 0x34]
        mov     word ptr [esp + 0x7e], dx
        call    FUN_004d1f80
        mov     ecx, dword ptr [g_7db090]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp + 0x14], cl
        mov     dx, word ptr [eax + 0x2]
        push    0x1
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x34]
        push    ecx
        mov     word ptr [esp + 0x22], dx
        call    FUN_004d9910
        fld     dword ptr [eax + 0x3b8]
        fadd    dword ptr [esp + 0x84]
        add     esp, 0xc
        test    eax, eax
        fstp    dword ptr [esp + 0x78]
        jz      L_941c
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
L_941c:
        dec     ebx
        lea     ecx, [esp + 0x2c]
        jz      L_943c
        call    FUN_004d21c0
L_9428:
        lea     ecx, [esp + 0x18]
        inc     edi
        call    FUN_00416cc0
        test    eax, eax
        jnz     L_938b
        jmp     L_9441
L_943c:
        call    FUN_004d21c0
L_9441:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jz      L_948d
        mov     eax, dword ptr [g_7dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_7dab40]
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        jz      L_948d
        mov     edx, dword ptr [eax + 0xc]
        xor     edx, 0x85739531
        mov     cl, byte ptr [edx + 0x17]
        test    cl, cl
        jnz     L_948d
        mov     eax, dword ptr [eax + 0x14]
        xor     eax, 0x85739531
        jz      L_9483
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
L_9483:
        push    0x5
        call    FUN_004c8e90
        add     esp, 0x4
L_948d:
        lea     ecx, [esp + 0x18]
        call    FUN_00416c60
        fld     dword ptr [esp + 0x78]
        call    FUN_0075db4a
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x60
        ret     0x8
    }
}
