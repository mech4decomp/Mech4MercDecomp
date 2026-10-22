/*
 * FUN_0069ce20 (320 B) — __thiscall growable-array push helper.
 *
 * Allocates a 0x138-byte object (FUN_004084d0 / FUN_00560190), calls
 * FUN_005b7e60 / FUN_00560420, then appends {obj,param} to a growable
 * array at EBX+0x50/0x54/0x58, reallocating when full.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00560190(void);
extern void __cdecl FUN_005b7e60(void);
extern void __cdecl FUN_00560420(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0069ce20(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x138
        mov     ebx, ecx
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_69CE47
        push    0x0
        mov     ecx, eax
        call    FUN_00560190
        mov     edi, eax
        jmp     L_69CE49
L_69CE47:
        xor     edi, edi
L_69CE49:
        mov     ebp, dword ptr [esp + 0x1c]
        push    0x0
        push    0x0
        push    0x1
        mov     ecx, ebp
        call    FUN_005b7e60
        push    eax
        mov     ecx, edi
        call    FUN_00560420
        mov     eax, dword ptr [edi]
        push    0x0
        mov     ecx, edi
        mov     dword ptr [edi + 0x10c], 0x0
        call    dword ptr [eax + 0x4]
        mov     esi, dword ptr [ebx + 0x54]
        cmp     esi, dword ptr [ebx + 0x58]
        jz      L_69CE96
        test    esi, esi
        jz      L_69CE86
        mov     dword ptr [esi], edi
        mov     dword ptr [esi + 0x4], ebp
L_69CE86:
        add     esi, 0x8
        pop     edi
        mov     dword ptr [ebx + 0x54], esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     4
L_69CE96:
        mov     ebp, dword ptr [ebx + 0x50]
        mov     eax, esi
        sub     eax, ebp
        sar     eax, 0x3
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x10], 0x1
        mov     dword ptr [esp + 0x14], eax
        lea     ecx, [esp + 0x10]
        jc      L_69CEB9
        lea     ecx, [esp + 0x14]
L_69CEB9:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x14], ecx
        jz      L_69CED5
        shl     ecx, 0x3
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x10], eax
        jmp     L_69CEDD
L_69CED5:
        mov     dword ptr [esp + 0x10], 0x0
L_69CEDD:
        cmp     ebp, esi
        mov     eax, dword ptr [esp + 0x10]
        jz      L_69CEFF
L_69CEE5:
        mov     ecx, ebp
L_69CEE7:
        test    eax, eax
        jz      L_69CEF5
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x4], edx
L_69CEF5:
        add     ecx, 0x8
        add     eax, 0x8
        cmp     ecx, esi
        jnz     L_69CEE7
L_69CEFF:
        test    eax, eax
        jz      L_69CF0C
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [eax], edi
        mov     dword ptr [eax + 0x4], ecx
L_69CF0C:
        cmp     esi, esi
        lea     edi, [eax + 0x8]
        jz      L_69CF31
L_69CF13:
        mov     eax, esi
        sub     eax, edi
L_69CF17:
        test    edi, edi
        jz      L_69CF27
        mov     edx, dword ptr [eax + edi]
        mov     dword ptr [edi], edx
        mov     ecx, dword ptr [eax + edi + 0x4]
        mov     dword ptr [edi + 0x4], ecx
L_69CF27:
        add     edi, 0x8
        lea     edx, [eax + edi]
        cmp     edx, esi
        jnz     L_69CF17
L_69CF31:
        test    ebp, ebp
        mov     dword ptr [esp + 0x1c], ebp
        jz      L_69CF42
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
L_69CF42:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [ebx + 0x54], edi
        pop     edi
        pop     esi
        lea     edx, [eax + ecx*8]
        pop     ebp
        mov     dword ptr [ebx + 0x50], eax
        mov     dword ptr [ebx + 0x58], edx
        pop     ebx
        add     esp, 0x8
        ret     4
    }
}
