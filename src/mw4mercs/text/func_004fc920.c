/*
 * FUN_004fc920 (317 B) — __thiscall, RET 0x8: MLR/Adept loader that grows a
 * per-type record array (0x1c-byte records), copies existing records, and
 * fills a new record from a stream. Returns the new record's id in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_004fc100(void);
extern void __cdecl FUN_004fc170(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_0041fcb0(void);

__declspec(naked) void FUN_004fc920(void)
{
    __asm {
        push    ecx
        push    ebx
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        or      eax, 0xffffffff
        cmp     edi, 0x12
        mov     ebx, ecx
        jge     L_fca57
        push    ebp
        mov     ebp, dword ptr [ebx + edi*8 + 0x14]
        push    esi
        lea     esi, [ebp + 0x1]
        mov     eax, ebp
        cmp     esi, eax
        mov     dword ptr [esp + 0x10], ebp
        jz      L_fca26
        test    esi, esi
        jbe     L_fca09
        lea     eax, [esi*8 + 0x0]
        sub     eax, esi
        lea     ecx, [eax*4 + 0x4]
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_fc99e
        add     eax, 0x4
        mov     dword ptr [eax + -0x4], esi
        dec     esi
        test    esi, esi
        mov     dword ptr [esp + 0x1c], eax
        mov     ebp, eax
        jl      L_fc994
        inc     esi
    L_fc983:
        mov     ecx, ebp
        call    FUN_004fc100
        add     ebp, 0x1c
        dec     esi
        jnz     L_fc983
        mov     eax, dword ptr [esp + 0x1c]
    L_fc994:
        mov     ebp, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x1c], eax
        jmp     L_fc9a6
    L_fc99e:
        mov     dword ptr [esp + 0x1c], 0
    L_fc9a6:
        mov     eax, dword ptr [ebx + edi*8 + 0x10]
        test    eax, eax
        jz      L_fc9ff
        mov     eax, dword ptr [ebx + edi*8 + 0x14]
        lea     ecx, [ebp + 0x1]
        cmp     ecx, eax
        jnc     L_fc9bb
        mov     eax, ecx
    L_fc9bb:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_fc9f1
        lea     esi, [eax*8 + 0x0]
        sub     esi, eax
        shl     esi, 0x2
        lea     ebp, [eax + 0x1]
    L_fc9d1:
        mov     edx, dword ptr [ebx + edi*8 + 0x10]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     eax, esi
        add     eax, edx
        push    eax
        add     ecx, esi
        call    FUN_004fc170
        dec     ebp
        sub     esi, 0x1c
        test    ebp, ebp
        ja      L_fc9d1
        mov     ebp, dword ptr [esp + 0x10]
    L_fc9f1:
        mov     ecx, dword ptr [ebx + edi*8 + 0x10]
        test    ecx, ecx
        jz      L_fc9ff
        mov     edx, dword ptr [ecx]
        push    0x3
        call    dword ptr [edx]
    L_fc9ff:
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [ebx + edi*8 + 0x10], eax
        jmp     L_fca1f
    L_fca09:
        mov     ecx, dword ptr [ebx + edi*8 + 0x10]
        test    ecx, ecx
        jz      L_fca17
        mov     edx, dword ptr [ecx]
        push    0x3
        call    dword ptr [edx]
    L_fca17:
        mov     dword ptr [ebx + edi*8 + 0x10], 0
    L_fca1f:
        lea     eax, [ebp + 0x1]
        mov     dword ptr [ebx + edi*8 + 0x14], eax
    L_fca26:
        mov     ecx, dword ptr [ebx + edi*8 + 0x10]
        mov     edx, dword ptr [esp + 0x18]
        lea     eax, [ebp*8 + 0x0]
        sub     eax, ebp
        lea     esi, [ecx + eax*4]
        push    edx
        lea     ecx, [esi + 0x10]
        call    FUN_00412780
        mov     ecx, dword ptr [esi + 0x14]
        call    FUN_0041fcb0
        shl     edi, 0x18
        add     edi, ebp
        mov     dword ptr [esi + 0x18], edi
        pop     esi
        mov     eax, edi
        pop     ebp
    L_fca57:
        pop     edi
        pop     ebx
        pop     ecx
        ret     0x8
    }
}
