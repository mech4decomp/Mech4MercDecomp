/*
 * FUN_006a61a0 (419 B) - __cdecl, two params, RET.
 * Iterates a list of objects, filters by comparison, and appends matching
 * items to an output vector (with reallocation via FUN_004084d0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005b9560(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00415230(void);
extern void *__cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_004084e0(void);

extern int g_7f268c;

__declspec(naked) void __cdecl FUN_006a61a0(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    esi
        mov     esi, dword ptr [ebx + 0x3d4]
        test    esi, esi
        jz      L633d
        mov     ecx, esi
        call    FUN_005b9560
        mov     ecx, dword ptr [esi + 0x17c]
        test    ecx, ecx
        mov     dword ptr [esp + 0x8], 0x0
        jle     L633d
        push    ebp
        push    edi
        mov     dword ptr [esp + 0x14], eax
L61da:
        mov     eax, dword ptr [eax]
        test    eax, eax
        jz      L6313
        lea     esi, [eax + 0x10]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      L6313
        mov     ecx, esi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0x30]
        cmp     eax, dword ptr [ebx + 0x30]
        jz      L6313
        mov     ecx, esi
        call    FUN_0041fd80
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        mov     edi, eax
        call    dword ptr [edx + 0x60]
        mov     ebp, eax
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x60]
        cmp     eax, ebp
        jz      L6313
        mov     ecx, esi
        call    FUN_0041fd80
        mov     ecx, dword ptr [g_7f268c]
        push    ecx
        mov     ecx, dword ptr [eax + 0x4]
        call    FUN_00415230
        test    al, al
        jz      L6313
        mov     ecx, esi
        call    FUN_0041fd80
        mov     edi, eax
        mov     eax, dword ptr [esp + 0x28]
        mov     esi, dword ptr [eax + 0x4]
        cmp     esi, dword ptr [eax + 0x8]
        jz      L626e
        test    esi, esi
        jz      L6263
        mov     dword ptr [esi], edi
L6263:
        add     esi, 0x4
        mov     dword ptr [eax + 0x4], esi
        jmp     L6313
L626e:
        mov     ebx, dword ptr [eax]
        mov     eax, esi
        sub     eax, ebx
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x18], 0x1
        mov     dword ptr [esp + 0x1c], eax
        lea     ecx, [esp + 0x18]
        jc      L6290
        lea     ecx, [esp + 0x1c]
L6290:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x1c], ecx
        jz      L62aa
        shl     ecx, 0x2
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     ebp, eax
        jmp     L62ac
L62aa:
        xor     ebp, ebp
L62ac:
        cmp     ebx, esi
        mov     eax, ebp
        jz      L62c6
        mov     ecx, ebx
L62b4:
        test    eax, eax
        jz      L62bc
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
L62bc:
        add     ecx, 0x4
        add     eax, 0x4
        cmp     ecx, esi
        jnz     L62b4
L62c6:
        test    eax, eax
        jz      L62cc
        mov     dword ptr [eax], edi
L62cc:
        cmp     esi, esi
        lea     edi, [eax + 0x4]
        jz      L62ea
        mov     eax, esi
        sub     eax, edi
L62d7:
        test    edi, edi
        jz      L62e0
        mov     ecx, dword ptr [eax + edi*0x1]
        mov     dword ptr [edi], ecx
L62e0:
        add     edi, 0x4
        lea     edx, [eax + edi*0x1]
        cmp     edx, esi
        jnz     L62d7
L62ea:
        test    ebx, ebx
        mov     dword ptr [esp + 0x18], ebx
        jz      L62fb
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L62fb:
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     ebx, dword ptr [esp + 0x24]
        lea     edx, [ebp + ecx*0x4]
        mov     dword ptr [eax], ebp
        mov     dword ptr [eax + 0x4], edi
        mov     dword ptr [eax + 0x8], edx
L6313:
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [ebx + 0x3d4]
        mov     esi, dword ptr [edx + 0x17c]
        inc     ecx
        add     eax, 0x4
        cmp     ecx, esi
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], eax
        jl      L61da
        pop     edi
        pop     ebp
L633d:
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret
    }
}
