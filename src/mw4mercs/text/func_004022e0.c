/*
 * FUN_004022e0 (466 B) - ApplyFilters: applies a set of boolean filter flags
 * (stored in a global byte array) to a game-list filter object, then dispatches
 * on a mode value (0..6) via a jump table.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f89f0(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_006f7950(void);
extern void __cdecl FUN_006f7350(void);
extern void __cdecl FUN_006f74d0(void);
extern void __cdecl FUN_006f7550(void);
extern void __cdecl FUN_006f75d0(void);
extern void __cdecl FUN_006f7370(void);
extern void __cdecl FUN_006f7390(void);
extern void __cdecl FUN_006f73b0(void);
extern void __cdecl FUN_006f73d0(void);
extern void __cdecl FUN_006f73f0(void);
extern void __cdecl FUN_006f7310(void);
extern void __cdecl FUN_006f7470(void);
extern void __cdecl FUN_006f79e0(void);

extern char g_7b7b70;
extern char g_7b7b71;
extern char g_7b7b72;
extern char g_7b7b73;
extern char g_7b7b74;
extern char g_7b7b75;
extern char g_7b7c60;
extern char g_7b7c61;
extern char g_7b7c62;
extern int  g_7b7b78;
extern int  g_7b7c64;
extern int  g_7b7c68;
extern char g_jt_4024b4;

__declspec(naked) void FUN_004022e0(void)
{
    __asm {
        push    esi
        push    edi
        call    FUN_006f89f0
        test    eax, eax
        jnz     L_402303
        push    0x76b814
        call    FUN_006fabf0
        add     esp, 4
        test    eax, eax
        jz      L_4022fd
        int     3
L_4022fd:
        pop     edi
        or      eax, 0xffffffff
        pop     esi
        ret
L_402303:
        mov     edi, dword ptr [eax + 0x3c]
        mov     ecx, edi
        call    FUN_006f7950
        mov     esi, eax
        test    esi, esi
        jnz     L_40232b
        push    0x76b7d0
        call    FUN_006fabf0
        add     esp, 4
        test    eax, eax
        jz      L_402325
        int     3
L_402325:
        pop     edi
        or      eax, 0xffffffff
        pop     esi
        ret
L_40232b:
        mov     dl, byte ptr [g_7b7b70]
        test    dl, dl
        setnz   al
        mov     ecx, esi
        push    eax
        call    FUN_006f7350
        mov     al, byte ptr [g_7b7b71]
        test    al, al
        setnz   cl
        push    ecx
        mov     ecx, esi
        call    FUN_006f74d0
        mov     cl, byte ptr [g_7b7b72]
        test    cl, cl
        setnz   dl
        mov     ecx, esi
        push    edx
        call    FUN_006f7550
        mov     dl, byte ptr [g_7b7b73]
        test    dl, dl
        setnz   al
        mov     ecx, esi
        push    eax
        call    FUN_006f75d0
        mov     al, byte ptr [g_7b7b74]
        test    al, al
        setnz   cl
        push    ecx
        mov     ecx, esi
        call    FUN_006f7370
        mov     cl, byte ptr [g_7b7b75]
        test    cl, cl
        setnz   dl
        mov     ecx, esi
        push    edx
        call    FUN_006f7390
        mov     dl, byte ptr [g_7b7c60]
        test    dl, dl
        setnz   al
        mov     ecx, esi
        push    eax
        call    FUN_006f73b0
        mov     al, byte ptr [g_7b7c61]
        test    al, al
        setnz   cl
        push    ecx
        mov     ecx, esi
        call    FUN_006f73d0
        mov     cl, byte ptr [g_7b7c62]
        test    cl, cl
        setnz   dl
        mov     ecx, esi
        push    edx
        call    FUN_006f73f0
        mov     eax, dword ptr [g_7b7b78]
        push    eax
        push    0
        mov     ecx, esi
        call    FUN_006f7310
        push    0x7b7b7c
        mov     ecx, esi
        call    FUN_006f7470
        mov     ecx, dword ptr [g_7b7c64]
        xor     eax, eax
        cmp     ecx, 6
        ja      L_40249e
        jmp     dword ptr [ecx*4 + g_jt_4024b4]
L_402406:
        mov     ecx, dword ptr [g_7b7c68]
        push    ecx
        xor     eax, eax
        push    eax
        mov     ecx, edi
        call    FUN_006f79e0
        pop     edi
        xor     eax, eax
        pop     esi
        ret
L_40241c:
        mov     ecx, dword ptr [g_7b7c68]
        push    ecx
        mov     eax, 1
        push    eax
        mov     ecx, edi
        call    FUN_006f79e0
        pop     edi
        xor     eax, eax
        pop     esi
        ret
L_402435:
        mov     ecx, dword ptr [g_7b7c68]
        push    ecx
        mov     eax, 2
        push    eax
        mov     ecx, edi
        call    FUN_006f79e0
        pop     edi
        xor     eax, eax
        pop     esi
        ret
L_40244e:
        mov     ecx, dword ptr [g_7b7c68]
        push    ecx
        mov     eax, 3
        push    eax
        mov     ecx, edi
        call    FUN_006f79e0
        pop     edi
        xor     eax, eax
        pop     esi
        ret
L_402467:
        mov     ecx, dword ptr [g_7b7c68]
        push    ecx
        mov     eax, 4
        push    eax
        mov     ecx, edi
        call    FUN_006f79e0
        pop     edi
        xor     eax, eax
        pop     esi
        ret
L_402480:
        mov     ecx, dword ptr [g_7b7c68]
        push    ecx
        mov     eax, 5
        push    eax
        mov     ecx, edi
        call    FUN_006f79e0
        pop     edi
        xor     eax, eax
        pop     esi
        ret
L_402499:
        mov     eax, 6
L_40249e:
        mov     ecx, dword ptr [g_7b7c68]
        push    ecx
        push    eax
        mov     ecx, edi
        call    FUN_006f79e0
        pop     edi
        xor     eax, eax
        pop     esi
        ret
    }
}
