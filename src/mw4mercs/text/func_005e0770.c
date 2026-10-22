/*
 * FUN_005e0770 (401 B) — collection scanner with obfuscated vtable dispatch
 * and vector reallocation (grow/insert) logic. RET 8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_004fca60(int a);
extern void *__stdcall FUN_004fd000(int a, int b);
extern void *__stdcall FUN_0041fd80(void);
extern char __stdcall FUN_00415230(void *a);
extern int __stdcall FUN_005df620(void *a);
extern void *__stdcall FUN_004084d0(int a);
extern void __stdcall FUN_004084e0(void *a);

__declspec(naked) void __stdcall FUN_005e0770(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f2524;
__asm {
sub     esp, 0x10
        mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        push    ebx
        push    ebp
        push    edi
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x10]
        push    0xf
        xor     ecx, 0x85739531
        call    FUN_004fca60
        mov     ebp, eax
        xor     ebx, ebx
        test    ebp, ebp
        mov     dword ptr [esp + 0x18], ebp
        mov     dword ptr [esp + 0xc], ebx
        jle     L_8f8
        push    esi
L_7a8:
        mov ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x10]
        push    ebx
        push    0xf
        xor     ecx, 0x85739531
        call    FUN_004fd000
        test    eax, eax
        jz      L_8ea
        mov     esi, dword ptr [eax + 0x14]
        test    esi, esi
        jz      L_8ea
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_8ea
        mov     ecx, esi
        call    FUN_0041fd80
        mov ecx, dword ptr [DAT_007f2524]
        push    ecx
        mov     ecx, dword ptr [eax + 0x4]
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_8ea
        mov     ecx, esi
        call    FUN_0041fd80
        mov     esi, eax
        mov     ecx, esi
        call    FUN_005df620
        cmp     eax, dword ptr [esp + 0x24]
        jnz     L_8ea
        mov     eax, dword ptr [esp + 0x28]
        mov     edi, dword ptr [eax + 0x4]
        cmp     edi, dword ptr [eax + 0x8]
        jz      L_83e
        test    edi, edi
        jz      L_833
        mov     dword ptr [edi], esi
L_833:
        add     edi, 0x4
        mov     dword ptr [eax + 0x4], edi
        jmp     L_8ea
L_83e:
        mov     ebp, dword ptr [eax]
        mov     eax, edi
        sub     eax, ebp
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x14], 0x1
        mov     dword ptr [esp + 0x18], eax
        lea     ecx, [esp + 0x14]
        jc      L_860
        lea     ecx, [esp + 0x18]
L_860:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x18], ecx
        jz      L_87e
        lea     edx, [ecx*4]
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        mov     ebx, eax
        jmp     L_880
L_87e:
        xor     ebx, ebx
L_880:
        cmp     ebp, edi
        mov     eax, ebx
        jz      L_89a
        mov     ecx, ebp
L_888:
        test    eax, eax
        jz      L_890
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
L_890:
        add     ecx, 0x4
        add     eax, 0x4
        cmp     ecx, edi
        jnz     L_888
L_89a:
        test    eax, eax
        jz      L_8a0
        mov     dword ptr [eax], esi
L_8a0:
        cmp     edi, edi
        lea     esi, [eax + 0x4]
        jz      L_8be
        mov     eax, edi
        sub     eax, esi
L_8ab:
        test    esi, esi
        jz      L_8b4
        mov     ecx, dword ptr [eax + esi]
        mov     dword ptr [esi], ecx
L_8b4:
        add     esi, 0x4
        lea     edx, [eax + esi]
        cmp     edx, edi
        jnz     L_8ab
L_8be:
        test    ebp, ebp
        mov     dword ptr [esp + 0x14], ebp
        jz      L_8cf
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
L_8cf:
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x18]
        mov     ebp, dword ptr [esp + 0x1c]
        lea     edx, [ebx + ecx*4]
        mov     dword ptr [eax], ebx
        mov     ebx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0x8], edx
L_8ea:
        inc     ebx
        cmp     ebx, ebp
        mov     dword ptr [esp + 0x10], ebx
        jl      L_7a8
        pop     esi
L_8f8:
        pop     edi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     8
    }


}
