/*
 * FUN_0064ea80 (513 B) — ABL bytecode interpreter dispatch loop.
 * Reads tokens from a global stream (g_00805918), dispatches on the
 * opcode (g_00805908) via a jump table, and executes list/object ops.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00805908;
extern char g_007b5a2e;
extern int g_00805918;
extern int g_008058cc;
extern int g_00805924;
extern int g_00805920;
extern int g_007f2ba8;
extern int g_00805904;
extern char g_00805959;
extern int g_0080d988;
extern int g_0080d984;
extern int g_0080d970;
extern char g_0080d969;
extern char g_007b5a8c;
extern int g_0080592c;

extern void __cdecl FUN_006205e0(void);
extern void __cdecl FUN_00562f30(void);
extern void __cdecl FUN_0064edf0(void);
extern void __cdecl FUN_0064ed00(void);
extern void __cdecl FUN_0064f750(void);
extern void __cdecl FUN_0064f970(void);
extern void __cdecl FUN_0064fab0(void);
extern void __cdecl FUN_0064fb40(void);
extern void __cdecl FUN_0064f640(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_0064ea80(void);

__declspec(naked) void FUN_0064ea80(void)
{
    __asm {
        mov     eax, dword ptr [g_00805908]
        cmp     eax, 0x48
        jnz     Leaee
        mov     cl, byte ptr [g_007b5a2e]
        or      eax, 0xffffffff
        test    cl, cl
        jz      Leab3
        mov     ecx, dword ptr [g_00805918]
        xor     eax, eax
        mov     al, byte ptr [ecx]
        inc     ecx
        add     ecx, 4
        mov     dword ptr [g_00805918], ecx
        mov     dword ptr [g_008058cc], eax
        mov     eax, dword ptr [ecx - 4]
Leab3:
        inc     dword ptr [g_00805924]
        mov     ecx, dword ptr [g_00805918]
        mov     dword ptr [g_00805920], ecx
        mov     ecx, dword ptr [g_007f2ba8]
        test    ecx, ecx
        mov     dword ptr [g_00805904], eax
        jz      Lead9
        call    FUN_006205e0
Lead9:
        mov     ecx, dword ptr [g_00805918]
        movsx   eax, byte ptr [ecx]
        inc     ecx
        mov     dword ptr [g_00805908], eax
        mov     dword ptr [g_00805918], ecx
Leaee:
        dec     eax
        cmp     eax, 0x44
        push    esi
        ja      Lec52
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x64ecac]
        jmp     dword ptr [edx*4 + 0x64ec84]
Leb08:
        mov     eax, dword ptr [g_00805918]
        mov     esi, dword ptr [eax]
        add     eax, 4
        mov     dword ptr [g_00805918], eax
        test    esi, esi
        setnz   al
        push    0x792d44
        push    0
        push    eax
        call    FUN_00562f30
        mov     eax, dword ptr [esi + 0x18]
        add     esp, 0xc
        cmp     eax, 8
        push    esi
        jnz     Leb51
        call    FUN_0064edf0
        add     esp, 4
        test    eax, eax
        jz      Lec5c
        sub     dword ptr [g_0080592c], 4
        jmp     Lec5c
Leb51:
        call    FUN_0064ed00
        jmp     Lec59
Leb5b:
        mov     ecx, dword ptr [g_00805918]
        movsx   eax, byte ptr [ecx]
        mov     esi, dword ptr [g_0080d988]
        inc     ecx
        mov     dword ptr [g_00805918], ecx
        xor     ecx, ecx
        test    esi, esi
        setnz   cl
        push    ebx
        mov     bl, byte ptr [g_00805959]
        mov     byte ptr [g_00805959], 0
        mov     dword ptr [g_00805908], eax
        add     ecx, 0x28
        cmp     eax, 0x27
        mov     esi, ecx
        jz      Lebad
Leb95:
        cmp     eax, esi
        jz      Lebad
        cmp     eax, 0x44
        jz      Lebad
        call    FUN_0064ea80
        mov     eax, dword ptr [g_00805908]
        cmp     eax, 0x27
        jnz     Leb95
Lebad:
        mov     eax, dword ptr [g_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov     byte ptr [g_00805959], bl
        mov     dword ptr [g_00805908], edx
        mov     dword ptr [g_00805918], eax
        pop     ebx
        jmp     Lec5c
Lebcd:
        call    FUN_0064f750
        jmp     Lec5c
Lebd7:
        call    FUN_0064f970
        jmp     Lec5c
Lebde:
        call    FUN_0064fab0
        jmp     Lec5c
Lebe5:
        call    FUN_0064fb40
        jmp     Lec5c
Lebec:
        call    FUN_0064f640
        jmp     Lec5c
Lebf3:
        mov     ecx, dword ptr [g_00805918]
        mov     eax, dword ptr [ecx]
        add     ecx, 4
        mov     dword ptr [g_00805918], ecx
        mov     ecx, dword ptr [g_0080d984]
        mov     ecx, dword ptr [ecx + 0x20]
        lea     edx, [ecx + ecx*4]
        mov     ecx, dword ptr [g_0080d970]
        mov     edx, dword ptr [ecx + edx*8 + 4]
        test    eax, eax
        mov     dword ptr [edx + 0x28], eax
        setnz   al
        push    0x792d44
        push    0
        push    eax
        call    FUN_00562f30
        movsx   ecx, byte ptr [g_007b5a8c]
        add     esp, 0xc
        mov     byte ptr [g_0080d969], 1
        mov     dword ptr [g_00805908], ecx
        mov     dword ptr [g_00805918], 0x7b5a8d
        jmp     Lec5c
Lec52:
        push    3
        call    FUN_00563060
Lec59:
        add     esp, 4
Lec5c:
        cmp     dword ptr [g_00805908], 0xe
        pop     esi
        jnz     Lec80
Lec66:
        mov     ecx, dword ptr [g_00805918]
Lec6c:
        movsx   eax, byte ptr [ecx]
        inc     ecx
        cmp     eax, 0xe
        mov     dword ptr [g_00805908], eax
        jz      Lec6c
        mov     dword ptr [g_00805918], ecx
Lec80:
        ret
    }
}
