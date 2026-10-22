/*
 * FUN_004f3070 (301 B) — MLR/Adept buffer resize (__thiscall, RET 4).
 * Reallocates an array of 0x2c-byte elements: frees the old array
 * (FUN_00417980 per element + FUN_004084e0), allocates a new one
 * (FUN_004084d0), and constructs each element via FUN_004f2370.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004f2370(void);

__declspec(naked) void FUN_004f3070(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        push    esi
        mov     esi, ecx
        cmp     ebx, dword ptr [esi + 0x4]
        push    edi
        mov     dword ptr [esp + 0x10], esi
        jz      L_3195
        test    ebx, ebx
        mov     ecx, dword ptr [esi]
        jbe     L_313f
        test    ecx, ecx
        jz      L_30ea
        mov     eax, dword ptr [ecx - 0x4]
        lea     edx, [ecx - 0x4]
        lea     edi, [eax + eax*4]
        lea     edi, [eax + edi*2]
        dec     eax
        mov     dword ptr [esp + 0x18], edx
        lea     edi, [ecx + edi*4]
        js      L_30e1
        lea     esi, [edi + 0x10]
        lea     ebp, [eax + 0x1]
L_30b2:
        sub     esi, 0x2c
        lea     ecx, [esi + 0x8]
        sub     edi, 0x2c
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_00417980
        lea     ecx, [esi - 0x8]
        call    FUN_00417980
        mov     ecx, edi
        call    FUN_00417980
        dec     ebp
        jnz     L_30b2
        mov     edx, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x10]
L_30e1:
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
L_30ea:
        lea     eax, [ebx + ebx*4]
        lea     ecx, [ebx + eax*2]
        lea     edx, [ecx*4 + 0x4]
        push    edx
        mov     dword ptr [esi + 0x4], ebx
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_3133
        lea     edi, [eax + 0x4]
        mov     dword ptr [eax], ebx
        lea     eax, [ebx - 0x1]
        test    eax, eax
        mov     esi, edi
        jl      L_3125
        lea     ebx, [eax + 0x1]
L_3118:
        mov     ecx, esi
        call    FUN_004f2370
        add     esi, 0x2c
        dec     ebx
        jnz     L_3118
L_3125:
        mov     esi, dword ptr [esp + 0x10]
        mov     dword ptr [esi], edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
L_3133:
        xor     edi, edi
        mov     dword ptr [esi], edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
L_313f:
        test    ecx, ecx
        jz      L_318f
        mov     eax, dword ptr [ecx - 0x4]
        lea     ebp, [ecx - 0x4]
        lea     edx, [eax + eax*4]
        lea     edx, [eax + edx*2]
        dec     eax
        lea     edi, [ecx + edx*4]
        js      L_3186
        lea     esi, [edi + 0x10]
        lea     ebx, [eax + 0x1]
L_315b:
        sub     esi, 0x2c
        lea     ecx, [esi + 0x8]
        sub     edi, 0x2c
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_00417980
        lea     ecx, [esi - 0x8]
        call    FUN_00417980
        mov     ecx, edi
        call    FUN_00417980
        dec     ebx
        jnz     L_315b
        mov     esi, dword ptr [esp + 0x10]
L_3186:
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
L_318f:
        mov     dword ptr [esi], 0x0
L_3195:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
