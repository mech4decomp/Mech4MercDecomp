/*
 * FUN_10018bb0 (259 B) - __stdcall cleanup. Frees two arrays of objects
 * (at this+0x20c and this+0x210) whose counts live in the descriptor at
 * this+0x38 (+4 and +8). Each object's buffer is freed via the free
 * pointer at 0x100210ec, then the object itself via FUN_1000a110.
 *
 * __stdcall (1 arg, RET 0x4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long *g_100210ec;
extern void __cdecl FUN_1000a0e0(void);
extern void __cdecl FUN_1000a110(void);

__declspec(naked) void __cdecl FUN_10018bb0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        xor     ebp, ebp
        mov     eax, dword ptr [edi + 0x38]
        cmp     eax, ebp
        jz      L_end
        cmp     dword ptr [eax + 4], ebp
        jbe     L_38
        mov     eax, dword ptr [eax + 0x28]
        cmp     eax, ebp
        jz      L_bd7
        push    eax
        call    FUN_1000a0e0
L_bd7:
        cmp     dword ptr [edi + 0x20c], ebp
        jz      L_c31
        mov     eax, dword ptr [edi + 0x38]
        xor     ebx, ebx
        cmp     dword ptr [eax + 4], ebp
        jbe     L_c25
L_be9:
        mov     ecx, dword ptr [edi + 0x20c]
        mov     esi, dword ptr [ecx + ebx*4]
        cmp     esi, ebp
        jz      L_c1c
        cmp     dword ptr [esi + 0xc], ebp
        jbe     L_c0b
        mov     eax, dword ptr [esi]
        cmp     eax, ebp
        jz      L_c0b
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_c0b:
        push    esi
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi + 0x10], ebp
        mov     dword ptr [esi + 0xc], ebp
        call    FUN_1000a110
        add     esp, 4
L_c1c:
        mov     edx, dword ptr [edi + 0x38]
        inc     ebx
        cmp     ebx, dword ptr [edx + 4]
        jc      L_be9
L_c25:
        mov     eax, dword ptr [edi + 0x20c]
        push    eax
        call    FUN_1000a0e0
L_c31:
        mov     ecx, dword ptr [edi + 0x38]
        mov     dword ptr [ecx + 4], ebp
L_38:
        mov     eax, dword ptr [edi + 0x38]
        cmp     dword ptr [eax + 8], ebp
        jbe     L_end
        mov     eax, dword ptr [eax + 0x28]
        cmp     eax, ebp
        jz      L_c4c
        push    eax
        call    FUN_1000a0e0
L_c4c:
        cmp     dword ptr [edi + 0x210], ebp
        jz      L_ca6
        mov     edx, dword ptr [edi + 0x38]
        xor     ebx, ebx
        cmp     dword ptr [edx + 8], ebp
        jbe     L_c9a
L_c5e:
        mov     eax, dword ptr [edi + 0x210]
        mov     esi, dword ptr [eax + ebx*4]
        cmp     esi, ebp
        jz      L_c91
        cmp     dword ptr [esi + 0xc], ebp
        jbe     L_c80
        mov     eax, dword ptr [esi]
        cmp     eax, ebp
        jz      L_c80
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_c80:
        push    esi
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi + 0x10], ebp
        mov     dword ptr [esi + 0xc], ebp
        call    FUN_1000a110
        add     esp, 4
L_c91:
        mov     ecx, dword ptr [edi + 0x38]
        inc     ebx
        cmp     ebx, dword ptr [ecx + 8]
        jc      L_c5e
L_c9a:
        mov     edx, dword ptr [edi + 0x210]
        push    edx
        call    FUN_1000a0e0
L_ca6:
        mov     eax, dword ptr [edi + 0x38]
        mov     dword ptr [eax + 8], ebp
L_end:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
