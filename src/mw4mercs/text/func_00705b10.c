/*
 * FUN_00705B10 (582 B) — Object/device initialization routine.
 *
 * Creates a mutex, allocates a sub-object, CoCreateInstance's two COM
 * objects, builds a stack struct from DAT_007a2fxx globals, and calls
 * virtual methods on them.
 *
 * __stdcall, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7a2e00;
extern int g_7a2e10;
extern int g_7a2eb0;
extern int g_7a2ed0;
extern int g_7a2f30;
extern int g_7a2f34;
extern int g_7a2f38;
extern int g_7a2f3c;
extern int g_7a2f90;
extern int g_7a2f94;
extern int g_7a2f98;
extern int g_7a2f9c;
extern int g_7a2fb0;
extern int g_7a2fb4;
extern int g_7a2fb8;
extern int g_7a2fbc;

extern void *g_76b21c;   /* IAT: CreateMutexA */
extern void *g_76b634;   /* IAT: CoCreateInstance */

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004084e0(void *ptr);
extern char __stdcall FUN_00705880(void *a, void *b);
extern void __cdecl FUN_00707920(void);
extern void *__stdcall FUN_006f3c80(int size, int context);
extern void __stdcall FUN_006f4230(void *p);

__declspec(naked) void __stdcall FUN_00705b10(void)
{
    __asm {
        sub     esp, 0x50
        push    ebx
        xor     ebx, ebx
        push    esi
        mov     esi, dword ptr [esp + 0x5c]
        cmp     byte ptr [esi + 0x70], bl
        push    edi
        mov     dword ptr [esp + 0xc], ebx
        mov     byte ptr [esi + 0x7c], bl
        mov     byte ptr [esi + 0x1834], bl
        mov     byte ptr [esi + 0x1878], bl
        mov     byte ptr [esi + 0x18f8], bl
        mov     byte ptr [esi + 0x1938], bl
        mov     byte ptr [esi + 0x1978], bl
        jnz     L_705b56
        push    ebx
        push    ebx
        push    ebx
        call    dword ptr [g_76b21c]        ; CreateMutexA
        mov     dword ptr [esi + 0x6c], eax
        mov     byte ptr [esi + 0x70], 1
L_705b56:
        cmp     dword ptr [esi + 0x68], ebx
        jnz     L_705baa
        push    0x30
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebx
        jz      L_705b70
        mov     dword ptr [eax], ebx
        mov     byte ptr [eax + 0x24], bl
        jmp     L_705b72
L_705b70:
        xor     eax, eax
L_705b72:
        cmp     eax, ebx
        mov     dword ptr [esi + 0x68], eax
        jnz     L_705b84
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0x50
        ret     4
L_705b84:
        push    esi
        push    eax
        call    FUN_00705880
        test    al, al
        jnz     L_705baa
        mov     esi, dword ptr [esi + 0x68]
        cmp     esi, ebx
        jz      L_705b9f
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_705b9f:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0x50
        ret     4
L_705baa:
        mov     eax, dword ptr [esi + 0x28]
        cmp     eax, ebx
        lea     edi, [esi + 0x28]
        jz      L_705bbc
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 8]
        mov     dword ptr [edi], ebx
L_705bbc:
        push    edi
        mov     edi, dword ptr [g_76b634]  ; CoCreateInstance
        push    offset g_7a2e00
        push    7
        push    ebx
        push    offset g_7a2e10
        call    edi
        test    eax, eax
        jl      L_705d14
        lea     edx, [esp + 0xc]
        push    edx
        push    offset g_7a2eb0
        push    7
        push    ebx
        push    offset g_7a2ed0
        call    edi
        test    eax, eax
        jl      L_705d14
        push    ebp
        call    FUN_00707920
        mov     edx, dword ptr [g_7a2f38]
        mov     ecx, dword ptr [g_7a2f34]
        mov     dword ptr [esp + 0x20], edx
        mov     edx, dword ptr [g_7a2f90]
        mov     ebp, eax
        mov     eax, dword ptr [g_7a2f30]
        mov     dword ptr [esp + 0x30], edx
        mov     edx, dword ptr [g_7a2f9c]
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, dword ptr [esi + 0x74]
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [g_7a2f3c]
        mov     dword ptr [esp + 0x3c], edx
        mov     dword ptr [esp + 0x2c], ecx
        mov     ecx, dword ptr [g_7a2f98]
        mov     dword ptr [esp + 0x24], eax
        mov     eax, dword ptr [g_7a2f94]
        mov     dword ptr [esp + 0x38], ecx
        mov     dword ptr [esp + 0x34], eax
        lea     edx, [esi + 0x2c]
        mov     edi, edx
        mov     dword ptr [esp + 0x44], edx
        mov     edx, dword ptr [g_7a2fb8]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        mov     eax, dword ptr [g_7a2fb0]
        mov     dword ptr [esp + 0x50], edx
        xor     edx, edx
        cmp     ebp, ebx
        setnz   dl
        mov     dword ptr [esp + 0x14], ebp
        not     ecx
        mov     dword ptr [esp + 0x40], ecx
        mov     ecx, dword ptr [g_7a2fb4]
        mov     dword ptr [esp + 0x48], eax
        mov     eax, dword ptr [g_7a2fbc]
        add     edx, 2
        mov     ebp, edx
        lea     edx, [esp + 0x64]
        push    edx
        push    ebx
        mov     dword ptr [esp + 0x54], ecx
        push    ebp
        mov     dword ptr [esp + 0x60], eax
        mov     eax, dword ptr [esp + 0x1c]
        lea     edx, [esp + 0x24]
        lea     ecx, [esp + 0x20]
        push    edx
        mov     dword ptr [esp + 0x38], 0x10
        mov     dword ptr [esp + 0x68], 4
        mov     dword ptr [esp + 0x6c], ecx
        mov     dword ptr [esp + 0x74], ebx
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x38]
        mov     eax, dword ptr [esp + 0x64]
        push    ebx
        push    eax
        call    FUN_006f3c80
        lea     edx, [esp + 0x64]
        push    edx
        mov     edi, eax
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [eax]
        push    edi
        push    ebp
        lea     edx, [esp + 0x24]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x38]
        test    eax, eax
        pop     ebp
        jl      L_705d0a
        mov     eax, dword ptr [esi + 0x28]
        mov     ecx, dword ptr [eax]
        push    ebx
        push    edi
        push    eax
        call    dword ptr [ecx + 0x98]
        test    eax, eax
        jge     L_705d37
L_705d0a:
        cmp     edi, ebx
        jz      L_705d14
        push    edi
        call    FUN_006f4230
L_705d14:
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, ebx
        jz      L_705d26
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 8]
        mov     dword ptr [esp + 0xc], ebx
L_705d26:
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 4]
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0x50
        ret     4
L_705d37:
        push    edi
        call    FUN_006f4230
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, ebx
        jz      L_705d4b
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 8]
L_705d4b:
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        add     esp, 0x50
        ret     4
    }
}
