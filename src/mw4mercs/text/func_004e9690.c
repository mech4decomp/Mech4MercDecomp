/*
 * FUN_004e9690 (345 B) — __thiscall, RET 0x4. MLR/Adept core: "set renderer
 * object" variant. If param_1 == this->0x17c, frees it (FUN_004c4600).
 * Otherwise reads the object's renderer (param_1->0x14), calls its virtual
 * method (vtable+0x74); if it returns 0, calls FUN_004ea320. Then dispatches
 * on the interest-level switch key calling FUN_004ea800 / FUN_0041fd80 /
 * FUN_004154d0, and finally either frees param_1 (FUN_004c4600) or registers
 * it via FUN_004b6ca0 + a virtual call (vtable+0xc) + FUN_004154d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004c4600(void);
extern void __cdecl FUN_004ea320(void);
extern void __cdecl FUN_004ea800(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004154d0(void);
extern int  __cdecl FUN_006fab90(int);
extern void __cdecl FUN_004b6ca0(void);

extern char g_773358[];   /* string @ 0x773358 */

__declspec(naked) void FUN_004e9690(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        push    esi
        mov     esi, ecx
        cmp     ebx, dword ptr [esi + 0x17c]
        push    edi
        jnz     L96B5
        push    ebx
        call    FUN_004c4600
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L96B5:
        mov     edi, dword ptr [ebx + 0x14]
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x74]
        test    al, al
        jnz     L96CB
        push    edi
        mov     ecx, esi
        call    FUN_004ea320
L96CB:
        mov     eax, dword ptr [esi + 0x14c]
        mov     ecx, dword ptr [edi + 0x10]
        and     eax, 0x180
        shl     eax, 0x2
        and     ecx, 0x180
        or      eax, ecx
        cmp     eax, 0x280
        jg      L970C
        jz      L972C
        cmp     eax, 0x100
        jg      L9703
        jz      L9723
        test    eax, eax
        jz      L9723
        cmp     eax, 0x80
        jz      L9723
        jmp     L9744
L9703:
        cmp     eax, 0x200
        jz      L9723
        jmp     L9744
L970C:
        cmp     eax, 0x480
        jg      L973D
        jz      L972C
        cmp     eax, 0x300
        jz      L972C
        cmp     eax, 0x400
        jnz     L9744
L9723:
        lea     edx, [esi + 0x15c]
        push    edx
        jmp     L977C
L972C:
        push    edi
        mov     ecx, esi
        call    FUN_004ea800
        lea     eax, [esi + 0x164]
        push    eax
        jmp     L977C
L973D:
        cmp     eax, 0x500
        jz      L9758
L9744:
        push    offset g_773358
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L9783
        int     3
        jmp     L9783
L9758:
        push    edi
        mov     ecx, esi
        call    FUN_004ea800
        lea     ecx, [edi + 0x20]
        call    FUN_0041fd80
        test    eax, eax
        jz      L9775
        lea     eax, [esi + 0x164]
        push    eax
        jmp     L977C
L9775:
        lea     ecx, [esi + 0x16c]
        push    ecx
L977C:
        mov     ecx, edi
        call    FUN_004154d0
L9783:
        mov     edx, dword ptr [edi + 0x10]
        shr     edx, 0xa
        test    dl, 0x1
        jnz     L979F
        push    ebx
        mov     ecx, esi
        call    FUN_004c4600
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L979F:
        mov     eax, dword ptr [ebx + 0x2c]
        mov     ecx, dword ptr [ebx + 0x4c]
        mov     edi, dword ptr [esi + 0x17c]
        mov     edx, eax
        mov     dword ptr [ebp + -0xc], eax
        mov     eax, ecx
        push    edx
        mov     dword ptr [ebp + -0x4], ecx
        push    eax
        mov     ecx, edi
        call    FUN_004b6ca0
        mov     ecx, dword ptr [edi + 0x144]
        push    ebx
        and     eax, 0xffff
        mov     eax, dword ptr [ecx + eax*0x4]
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0xc]
        add     esi, 0x174
        push    esi
        mov     ecx, ebx
        call    FUN_004154d0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
