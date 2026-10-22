/*
 * FUN_004fc7b0 (366 B) — __thiscall, RET 0x8: MLR/Adept loader that grows a
 * per-type record array (0x1c-byte records), copies existing records, and
 * fills a new record from a stream.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_004fc100(void);
extern void __cdecl FUN_004fc170(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_004fcb50(void);

__declspec(naked) void FUN_004fc7b0(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi]
        mov     ebx, ecx
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0x54]
        mov     edi, eax
        cmp     edi, 0x12
        mov     dword ptr [esi + 0x30], 0xffffffff
        jge     L_fc915
        push    ebp
        mov     ebp, dword ptr [ebx + edi*8 + 0x14]
        lea     esi, [ebp + 0x1]
        mov     eax, ebp
        cmp     esi, eax
        mov     dword ptr [esp + 0x14], ebp
        jz      L_fc8c4
        test    esi, esi
        jbe     L_fc8a7
        lea     ecx, [esi*8 + 0x0]
        sub     ecx, esi
        lea     edx, [ecx*4 + 0x4]
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_fc83d
        add     eax, 0x4
        mov     dword ptr [eax + -0x4], esi
        dec     esi
        test    esi, esi
        mov     dword ptr [esp + 0x10], eax
        mov     ebp, eax
        jl      L_fc833
        inc     esi
    L_fc822:
        mov     ecx, ebp
        call    FUN_004fc100
        add     ebp, 0x1c
        dec     esi
        jnz     L_fc822
        mov     eax, dword ptr [esp + 0x10]
    L_fc833:
        mov     ebp, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x10], eax
        jmp     L_fc845
    L_fc83d:
        mov     dword ptr [esp + 0x10], 0
    L_fc845:
        mov     eax, dword ptr [ebx + edi*8 + 0x10]
        test    eax, eax
        jz      L_fc89d
        mov     ecx, dword ptr [ebx + edi*8 + 0x14]
        lea     eax, [ebp + 0x1]
        cmp     eax, ecx
        jc      L_fc85a
        mov     eax, ecx
    L_fc85a:
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        jz      L_fc88f
        lea     esi, [eax*8 + 0x0]
        sub     esi, eax
        shl     esi, 0x2
        lea     ebp, [eax + 0x1]
    L_fc870:
        mov     edx, dword ptr [ebx + edi*8 + 0x10]
        mov     eax, dword ptr [esp + 0x10]
        add     edx, esi
        push    edx
        lea     ecx, [esi + eax]
        call    FUN_004fc170
        dec     ebp
        sub     esi, 0x1c
        test    ebp, ebp
        ja      L_fc870
        mov     ebp, dword ptr [esp + 0x14]
    L_fc88f:
        mov     ecx, dword ptr [ebx + edi*8 + 0x10]
        test    ecx, ecx
        jz      L_fc89d
        mov     edx, dword ptr [ecx]
        push    0x3
        call    dword ptr [edx]
    L_fc89d:
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [ebx + edi*8 + 0x10], eax
        jmp     L_fc8bd
    L_fc8a7:
        mov     ecx, dword ptr [ebx + edi*8 + 0x10]
        test    ecx, ecx
        jz      L_fc8b5
        mov     edx, dword ptr [ecx]
        push    0x3
        call    dword ptr [edx]
    L_fc8b5:
        mov     dword ptr [ebx + edi*8 + 0x10], 0
    L_fc8bd:
        lea     eax, [ebp + 0x1]
        mov     dword ptr [ebx + edi*8 + 0x14], eax
    L_fc8c4:
        mov     ecx, dword ptr [ebx + edi*8 + 0x10]
        mov     edx, dword ptr [esp + 0x1c]
        lea     eax, [ebp*8 + 0x0]
        sub     eax, ebp
        lea     esi, [ecx + eax*4]
        mov     eax, dword ptr [edx + 0x2c]
        push    eax
        lea     ecx, [esi + 0x10]
        call    FUN_00412780
        mov     ecx, dword ptr [esi + 0x14]
        call    FUN_0041fcb0
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jz      L_fc901
        mov     ecx, dword ptr [esi + 0x14]
        push    eax
        call    FUN_0041fcd0
        mov     eax, dword ptr [esp + 0x1c]
    L_fc901:
        shl     edi, 0x18
        add     edi, ebp
        push    eax
        mov     ecx, ebx
        mov     dword ptr [eax + 0x30], edi
        mov     dword ptr [esi + 0x18], edi
        call    FUN_004fcb50
        pop     ebp
    L_fc915:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x8
        ret     0x8
    }
}
