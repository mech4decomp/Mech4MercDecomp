/*
 * FUN_005c17e0 (417 B) — __thiscall (ECX = this), RET 0xC (3 stack params).
 * Validates an owned object, allocates/copies a 0x30-byte block, rebuilds
 * sub-objects, updates timers, and calls FUN_005c4330.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(void);
extern int __cdecl FUN_0041fd80(void);
extern int __cdecl FUN_00661e40(void);
extern void *__cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_005cbe30(int);
extern void __cdecl FUN_005cbc20(int, int, int);
extern void __cdecl FUN_005cb6c0(void);
extern void __cdecl FUN_004084e0(void *);
extern float __cdecl FUN_00707e70(int);
extern float __cdecl FUN_00665ce0(int);
extern void __cdecl FUN_005c44c0(void);
extern void __cdecl FUN_005c4330(int, int, int);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void __stdcall FUN_005c17e0(void)
{
    

extern int DAT_007f2460;
__asm {
        mov eax, dword ptr [DAT_007f2460]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     ebp, ecx
        call    FUN_006f4950
        lea     edi, [ebp + 0x1c8]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_done
        mov     esi, dword ptr [ebp + 0x4e0]
        test    esi, 0xfffffffc
        mov     ebx, dword ptr [esp + 0x14]
        jz      L_1840
        and     esi, 0xfffffffc
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        cmp     eax, ebx
        jz      L_done
        cmp     byte ptr [esp + 0x1c], 0x1
        jnz     L_1840
        mov     ecx, esi
        call    FUN_00661e40
        cmp     eax, ebx
        jz      L_done
L_1840:
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_1962
        cmp     byte ptr [ebp + 0x2f2], 0x1
        jnz     L_1962
        mov     al, byte ptr [ebp + 0x2f9]
        test    al, al
        jnz     L_1962
        mov     ecx, dword ptr [ebp + 0x4e0]
        test    ecx, 0xfffffffc
        jz      L_1888
        and     ecx, 0xfffffffc
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x4]
        cmp     eax, ebx
        jz      L_done
L_1888:
        push    0x30
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_18b5
        mov     ecx, dword ptr [ebp + 0x170]
        mov     esi, dword ptr [ecx + 0xd8]
        add     esi, 0x80
        mov     ecx, 0xc
        mov     edi, eax
        rep     movsd
        mov     edi, eax
        jmp     L_18b7
L_18b5:
        xor     edi, edi
L_18b7:
        mov     edx, dword ptr [ebp + 0x598]
        lea     esi, [ebp + 0x598]
        push    0x0
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edx
        call    FUN_005cbe30
        push    0x0
        push    0x1
        push    edi
        mov     ecx, esi
        call    FUN_005cbc20
        mov     esi, dword ptr [esp + 0x14]
        push    0x0
        lea     ecx, [esp + 0x18]
        call    FUN_005cbe30
        lea     ecx, [esp + 0x14]
        call    FUN_005cb6c0
        mov     eax, esi
        and     eax, 0x1
        cmp     al, 0x1
        jnz     L_190e
        mov     ecx, esi
        and     esi, 0xfffffffc
        push    esi
        and     ecx, 0x2
        call    FUN_004084e0
        add     esp, 0x4
L_190e:
        push    0x0
        call    FUN_00707e70
        fstp    dword ptr [ebp + 0x578]
        mov     edx, dword ptr [ebp + 0x170]
        push    edx
        call    FUN_00665ce0
        fstp    dword ptr [ebp + 0x69c]
        mov     eax, dword ptr [ebp + 0x4e0]
        add     esp, 0x4
        test    eax, 0xfffffffc
        jz      L_1944
        mov     ecx, ebp
        call    FUN_005c44c0
L_1944:
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    ebx
        mov     ecx, ebp
        call    FUN_005c4330
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
L_1962:
        test    dword ptr [ebp + 0x4e0], 0xfffffffc
        jz      L_done
        mov     ecx, ebp
        call    FUN_005c44c0
L_done:
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }


}
