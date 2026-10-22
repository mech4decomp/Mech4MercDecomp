/*
 * MW4StatsDll_UserGunAuth (1169 B) - __stdcall RET 0x14. COM gun-auth:
 * allocates BSTRs, CoInitialize/CoCreateInstance, builds HTTP URL, sends
 * ticket requests, extracts sanitized ticket. SEH frame (handler 0x1001f38c).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10002fd0(void);
extern void __cdecl FUN_10003340(void);
extern void __cdecl FUN_10003390(void);
extern void __cdecl FUN_10003410(void);
extern void __cdecl FUN_10003470(void);
extern void __cdecl FUN_100034d0(void);
extern void __cdecl FUN_10003420(void);
extern void __cdecl FUN_10003300(void);
extern void __cdecl FUN_10003000(void);
extern void __cdecl FUN_10003550(void);
extern void __cdecl FUN_100035a0(void);
extern void __cdecl FUN_100035f0(void);
extern void __cdecl FUN_10003560(void);
extern void __cdecl FUN_10003670(void);
extern void __cdecl FUN_10001660(void);
extern void __cdecl FUN_10002f90(void);
extern void __cdecl FUN_10002fa0(void);

extern void *g_1002115c;   /* SysAllocString */
extern void *g_10021194;   /* CoInitialize */
extern void *g_10021198;   /* CoCreateInstance */
extern void *g_100210ac;   /* wcscpy */
extern void *g_100210f4;   /* wcslen */
extern void *g_100210b0;   /* wcsncat */
extern void *g_10021034;   /* Sleep */
extern void *g_1002110c;   /* printf */
extern void *g_100210f8;   /* malloc */
extern void *g_10021108;   /* wcsncpy */

__declspec(naked) unsigned long __cdecl FUN_10002af0(void)
{
    __asm {
        push    -1
        push    0x1001f38c
        mov     eax, fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x370
        push    ebx
        push    ebp
        push    esi
        push    edi
        lea     ecx, [esp + 0x4c]
        call    FUN_10002fd0
        mov     eax, dword ptr [esp + 0x390]
        mov     esi, dword ptr [g_1002115c]
        xor     ebx, ebx
        push    eax
        mov     dword ptr [esp + 0x38c], ebx
        call    esi
        mov     ecx, dword ptr [esp + 0x394]
        push    ecx
        mov     dword ptr [esp + 0x60], eax
        call    esi
        push    ebx
        mov     dword ptr [esp + 0x64], eax
        call    dword ptr [g_10021194]
        cmp     eax, ebx
        mov     dword ptr [esp + 0x10], eax
        jge     L_2b59
        mov     esi, eax
        jmp     L_2e98
L_2b59:
        lea     edx, [esp + 0x4c]
        push    edx
        push    0x100211a0
        push    7
        push    ebx
        push    0x100211c0
        call    dword ptr [g_10021198]
        cmp     eax, ebx
        mov     dword ptr [esp + 0x10], eax
        jge     L_2b80
        mov     esi, eax
        jmp     L_2e98
L_2b80:
        lea     eax, [esp + 0x180]
        push    0x100241d0
        push    eax
        call    dword ptr [g_100210ac]
        mov     edi, dword ptr [g_100210f4]
        lea     ecx, [esp + 0x188]
        push    ecx
        call    edi
        mov     edx, dword ptr [esp + 0x3a4]
        mov     esi, dword ptr [g_100210b0]
        mov     ecx, 0x100
        sub     ecx, eax
        push    ecx
        push    edx
        lea     eax, [esp + 0x194]
        push    eax
        call    esi
        lea     ecx, [esp + 0x198]
        push    ecx
        call    edi
        mov     ecx, 0x100
        sub     ecx, eax
        push    ecx
        lea     edx, [esp + 0x1a0]
        push    0x100241e0
        push    edx
        call    esi
        lea     eax, [esp + 0x1a8]
        push    eax
        call    edi
        mov     ecx, 0x100
        sub     ecx, eax
        push    ecx
        lea     ecx, [esp + 0x1b0]
        push    0x100241e4
        push    ecx
        call    esi
        mov     ecx, dword ptr [esp + 0x84]
        add     esp, 0x38
        lea     edx, [esp + 0x180]
        push    edx
        push    0x10024214
        lea     eax, [esp + 0x18]
        push    eax
        push    0x100038b0
        push    ecx
        lea     ecx, [esp + 0x28]
        call    FUN_10003340
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esp + 0x388], 1
        call    FUN_10003390
        test    al, al
        jz      L_2e06
        lea     ecx, [esp + 0x14]
        call    FUN_10003410
        test    al, al
        mov     ebp, dword ptr [g_10021034]
        jnz     L_2c6c
L_2c5c:
        push    ebx
        call    ebp
        lea     ecx, [esp + 0x14]
        call    FUN_10003410
        test    al, al
        jz      L_2c5c
L_2c6c:
        mov     esi, dword ptr [esp + 0x10]
        cmp     esi, ebx
        jl      L_2e88
        mov     eax, dword ptr [esp + 0x60]
        mov     ecx, dword ptr [esp + 0x5c]
        lea     edx, [esp + 0x68]
        push    edx
        push    0x10024224
        push    eax
        mov     eax, dword ptr [esp + 0x58]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        push    0x100038a0
        push    eax
        lea     ecx, [esp + 0x120]
        call    FUN_10003470
        lea     ecx, [esp + 0x104]
        mov     byte ptr [esp + 0x388], 2
        call    FUN_100034d0
        test    al, al
        jnz     L_2d01
        lea     ecx, [esp + 0x104]
        mov     byte ptr [esp + 0x388], 1
        call    FUN_10003420
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esp + 0x388], bl
        call    FUN_10003300
        lea     ecx, [esp + 0x4c]
        mov     dword ptr [esp + 0x388], 0xffffffff
        call    FUN_10003000
        mov     eax, 1
        jmp     L_2f66
L_2d01:
        lea     ecx, [esp + 0x104]
        call    FUN_10003550
        test    al, al
        jnz     L_2d25
L_2d11:
        push    1
        call    ebp
        lea     ecx, [esp + 0x104]
        call    FUN_10003550
        test    al, al
        jz      L_2d11
L_2d25:
        mov     esi, dword ptr [esp + 0x10]
        cmp     esi, ebx
        jl      L_2e74
        mov     ecx, dword ptr [esp + 0x68]
        mov     esi, dword ptr [g_1002110c]
        push    ecx
        push    0x10024230
        call    esi
        mov     eax, dword ptr [esp + 0x54]
        mov     edx, dword ptr [eax]
        add     esp, 8
        lea     ecx, [esp + 0x64]
        push    ecx
        mov     ecx, dword ptr [esp + 0x6c]
        push    ecx
        push    0x10024240
        push    eax
        call    dword ptr [edx + 0x38]
        cmp     eax, ebx
        mov     dword ptr [esp + 0x10], eax
        jge     L_2d72
        push    eax
        push    0x10024258
        call    esi
        add     esp, 8
L_2d72:
        mov     eax, dword ptr [esp + 0x4c]
        mov     edx, dword ptr [eax]
        lea     ecx, [esp + 0x58]
        push    ecx
        mov     ecx, dword ptr [esp + 0x6c]
        push    ecx
        push    eax
        call    dword ptr [edx + 0x3c]
        cmp     eax, ebx
        mov     dword ptr [esp + 0x10], eax
        jge     L_2d99
        push    eax
        push    0x10024278
        call    esi
        add     esp, 8
L_2d99:
        mov     eax, dword ptr [esp + 0x64]
        mov     ecx, dword ptr [esp + 0x39c]
        lea     edx, [esp + 0x54]
        push    edx
        push    eax
        mov     eax, dword ptr [esp + 0x54]
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        push    0x100038c0
        push    eax
        lea     ecx, [esp + 0x15c]
        call    FUN_100035a0
        lea     ecx, [esp + 0x144]
        mov     byte ptr [esp + 0x388], 3
        call    FUN_100035f0
        test    al, al
        jnz     L_2e34
        lea     ecx, [esp + 0x144]
        mov     byte ptr [esp + 0x388], 2
        call    FUN_10003560
        lea     ecx, [esp + 0x104]
        mov     byte ptr [esp + 0x388], 1
        call    FUN_10003420
L_2e06:
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esp + 0x388], bl
        call    FUN_10003300
        lea     ecx, [esp + 0x4c]
        mov     dword ptr [esp + 0x388], 0xffffffff
        call    FUN_10003000
        mov     eax, 0x80004005
        jmp     L_2f66
L_2e34:
        lea     ecx, [esp + 0x144]
        call    FUN_10003670
        test    al, al
        jnz     L_2e58
L_2e44:
        push    1
        call    ebp
        lea     ecx, [esp + 0x144]
        call    FUN_10003670
        test    al, al
        jz      L_2e44
L_2e58:
        mov     esi, dword ptr [esp + 0x10]
        cmp     esi, ebx
        jge     L_2eb3
        lea     ecx, [esp + 0x144]
        mov     byte ptr [esp + 0x388], 2
        call    FUN_10003560
L_2e74:
        lea     ecx, [esp + 0x104]
        mov     byte ptr [esp + 0x388], 1
        call    FUN_10003420
L_2e88:
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esp + 0x388], bl
        call    FUN_10003300
L_2e98:
        lea     ecx, [esp + 0x4c]
        mov     dword ptr [esp + 0x388], 0xffffffff
        call    FUN_10003000
        mov     eax, esi
        jmp     L_2f66
L_2eb3:
        mov     ecx, dword ptr [esp + 0x54]
        push    ecx
        lea     ecx, [esp + 0x70]
        call    FUN_10001660
        mov     edx, dword ptr [esp + 0x58]
        push    edx
        lea     ecx, [esp + 0x70]
        call    FUN_10002f90
        lea     ecx, [esp + 0x6c]
        call    FUN_10002fa0
        test    eax, eax
        jz      L_2f18
        lea     ecx, [esp + 0x6c]
        call    FUN_10002fa0
        push    eax
        call    edi
        mov     esi, eax
        inc     esi
        lea     eax, [esi + esi*1]
        push    eax
        call    dword ptr [g_100210f8]
        mov     ecx, dword ptr [esp + 0x3a8]
        mov     edi, eax
        add     esp, 8
        mov     dword ptr [ecx], edi
        push    esi
        lea     ecx, [esp + 0x70]
        call    FUN_10002fa0
        push    eax
        push    edi
        call    dword ptr [g_10021108]
        add     esp, 0xc
L_2f18:
        lea     ecx, [esp + 0x144]
        mov     byte ptr [esp + 0x388], 2
        call    FUN_10003560
        lea     ecx, [esp + 0x104]
        mov     byte ptr [esp + 0x388], 1
        call    FUN_10003420
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esp + 0x388], bl
        call    FUN_10003300
        lea     ecx, [esp + 0x4c]
        mov     dword ptr [esp + 0x388], 0xffffffff
        call    FUN_10003000
        xor     eax, eax
L_2f66:
        mov     ecx, dword ptr [esp + 0x380]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x37c
        ret     0x14
    }
}
