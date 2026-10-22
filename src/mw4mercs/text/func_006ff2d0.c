/* FUN_006ff2d0 - 861 bytes, __stdcall RET 0x8 */
#include <mw4/common.h>

extern int __cdecl FUN_006f89f0(void);
extern void __cdecl FUN_006fd260(void);
extern int __cdecl FUN_006fd230(void);
extern void __cdecl FUN_006ffc00(void *, void *);
extern int __cdecl FUN_006ffd60(void *);
extern int __cdecl FUN_006f8430(void);
extern char __cdecl FUN_006f7970(int, void *);
extern int __cdecl FUN_006fabf0(const char *, int);
extern void *__cdecl FUN_006f5b80(void *, const char *);
extern void __cdecl FUN_006ffeb0(void *, int);
extern void __cdecl FUN_006ffc90(void *);

extern unsigned long g_856860;   /* 0x00856860 dword */
extern unsigned long g_85682c;   /* 0x0085682c dword */
extern unsigned char g_85685f;   /* 0x0085685f byte */
extern int g_7b6f0c;             /* 0x007b6f0c dword */
extern float g_7a0328;           /* 0x007a0328 float */
extern void *g_76b294;           /* 0x0076b294 malloc IAT */
extern void *g_76b420;           /* 0x0076b420 sprintf IAT */
extern void *g_76b2d0;           /* 0x0076b2d0 free IAT */

__declspec(naked) int FUN_006ff2d0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        push ebx
        push esi
        push edi
        call FUN_006f89f0
        xor edi, edi
        cmp eax, edi
        mov dword ptr [ebp - 8], eax
        jnz L_f2f2
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8

L_f2f2:
        mov ecx, dword ptr [g_856860]
        cmp ecx, edi
        jz L_f326
        mov al, byte ptr [ecx + 0x24]
        test al, al
        jz L_f326
        call FUN_006fd260
        mov ecx, dword ptr [g_856860]
        call FUN_006fd230
        cmp eax, 2
        jz L_f341
        cmp eax, 4
        jz L_f326
        cmp eax, 3
        jz L_f326
        cmp eax, edi
        jnz L_f32f

L_f326:
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        push eax
        call dword ptr [edx + 4]

L_f32f:
        pop edi
        pop esi
        mov byte ptr [g_85685f], 1
        mov al, 1
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8

L_f341:
        push 0x3c
        mov byte ptr [g_85685f], 0
        call dword ptr [g_76b294]
        add esp, 4
        cmp eax, edi
        jz L_f390
        or ecx, 0xffffffff
        mov dword ptr [eax + 0x20], edi
        mov dword ptr [eax + 0x28], edi
        mov dword ptr [eax + 4], edi
        mov dword ptr [eax + 8], edi
        mov dword ptr [eax], edi
        mov byte ptr [eax + 0xc], 0
        mov dword ptr [eax + 0x10], edi
        mov dword ptr [eax + 0x14], edi
        mov dword ptr [eax + 0x18], ecx
        mov dword ptr [eax + 0x1c], ecx
        mov dword ptr [eax + 0x24], edi
        mov dword ptr [eax + 0x2c], edi
        mov byte ptr [eax + 0x30], 0
        mov byte ptr [eax + 0x31], 0
        mov dword ptr [eax + 0x34], edi
        mov dword ptr [eax + 0x38], edi
        mov ebx, eax
        jmp L_f392

L_f390:
        xor ebx, ebx

L_f392:
        mov eax, dword ptr [g_85682c]
        mov esi, dword ptr [ebp + 0xc]
        cmp esi, edi
        mov dword ptr [ebx + 0x34], eax
        mov dword ptr [g_85682c], ebx
        mov dword ptr [ebx], edi
        mov byte ptr [ebx + 0x31], 0
        jz L_f401
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov edi, 0x7a0320
        repne scasb
        not ecx
        dec ecx
        lea eax, [edx + ecx + 2]
        push eax
        call dword ptr [g_76b294]
        push esi
        push 0x7a0320
        push 0x7a0e90
        push eax
        mov dword ptr [ebx + 0x10], eax
        call dword ptr [g_76b420]
        add esp, 0x14
        push esi
        push ebx
        call FUN_006ffc00
        push ebx
        call FUN_006ffd60
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8

L_f401:
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0x3c]
        mov dword ptr [ebp - 0x14], ecx
        call FUN_006f8430
        mov dword ptr [ebp + 8], eax
        cmp dword ptr [g_7b6f0c], 0x14
        jle L_f5dc
        fild dword ptr [ebp + 8]
        fidiv dword ptr [g_7b6f0c]
        fcomp dword ptr [g_7a0328]
        fnstsw ax
        test ah, 0x41
        jz L_f5dc
        xor esi, esi
        mov dword ptr [ebx + 0x10], edi
        mov dword ptr [ebp - 4], esi
        mov dword ptr [ebp - 0x10], edi
        jmp L_f448

L_f446:
        xor edi, edi

L_f448:
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        mov dword ptr [ebp - 0xc], edi
        jle L_f567

L_f456:
        mov ecx, dword ptr [ebp - 0x14]
        lea edx, [ebp + 0xc]
        push edx
        push edi
        call FUN_006f7970
        test al, al
        jnz L_f483
        push edi
        push 0x7a0e64
        call FUN_006fabf0
        add esp, 8
        test eax, eax
        jz L_f552
        int 3
        /* dead SEH/finally jmp after int 3 (reference emits E9 CF 00 00 00) */
        jmp L_f552

L_f483:
        mov eax, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [ebp - 8]
        push 0x79fad4
        push eax
        call FUN_006f5b80
        test eax, eax
        jz L_f552
        mov esi, 0x79fb30

L_f4a1:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jnz L_f4c5
        test cl, cl
        jz L_f4c1
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [esi + 1]
        jnz L_f4c5
        add eax, 2
        add esi, 2
        test cl, cl
        jnz L_f4a1

L_f4c1:
        xor eax, eax
        jmp L_f4ca

L_f4c5:
        sbb eax, eax
        sbb eax, -1

L_f4ca:
        test eax, eax
        jnz L_f552
        mov edx, dword ptr [ebx + 0x10]
        test edx, edx
        mov edi, dword ptr [ebp + 0xc]
        jz L_f53e
        or ecx, 0xffffffff
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov dword ptr [ebp - 0x18], eax
        xor eax, eax
        mov edi, edx
        repne scasb
        mov eax, dword ptr [ebp - 0x18]
        dec edi
        mov ecx, eax
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, 0x774288
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, dword ptr [ebx + 0x10]
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr [ebp + 0xc]
        push eax
        push ebx
        call FUN_006ffc00
        jmp L_f552

L_f53e:
        mov edx, dword ptr [ebp - 4]
        or ecx, 0xffffffff
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        lea eax, [edx + ecx + 1]
        mov dword ptr [ebp - 4], eax

L_f552:
        mov edi, dword ptr [ebp - 0xc]
        mov eax, dword ptr [ebp + 8]
        inc edi
        cmp edi, eax
        mov dword ptr [ebp - 0xc], edi
        jl L_f456
        mov esi, dword ptr [ebp - 4]

L_f567:
        mov edx, dword ptr [ebx + 0x10]
        test edx, edx
        jz L_f584
        test esi, esi
        jz L_f5c9
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        mov byte ptr [ecx + edx - 1], al
        jmp L_f5b5

L_f584:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, 0x7a0320
        repne scasb
        not ecx
        dec ecx
        lea ecx, [ecx + esi + 0x10]
        push ecx
        call dword ptr [g_76b294]
        push 0x7a0320
        push 0x7a0e60
        push eax
        mov dword ptr [ebx + 0x10], eax
        call dword ptr [g_76b420]
        add esp, 0x10

L_f5b5:
        mov eax, dword ptr [ebp - 0x10]
        inc eax
        cmp eax, 2
        mov dword ptr [ebp - 0x10], eax
        jl L_f446
        xor edi, edi
        jmp L_f5e3

L_f5c9:
        push 0
        push ebx
        call FUN_006ffeb0
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8

L_f5dc:
        mov byte ptr [ebx + 0x31], 1
        mov dword ptr [ebx + 0x10], edi

L_f5e3:
        mov al, byte ptr [ebx + 0x31]
        test al, al
        jnz L_f605
        mov edi, dword ptr [ebx + 0x10]
        test edi, edi
        jz L_f603
        or ecx, 0xffffffff
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        cmp ecx, 0x800
        jbe L_f623

L_f603:
        xor edi, edi

L_f605:
        mov eax, dword ptr [ebx + 0x10]
        cmp eax, edi
        jz L_f616
        push eax
        call dword ptr [g_76b2d0]
        add esp, 4

L_f616:
        push ebx
        mov dword ptr [ebx + 0x10], edi
        mov byte ptr [ebx + 0x31], 1
        call FUN_006ffc90

L_f623:
        push ebx
        call FUN_006ffd60
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
    }
}
