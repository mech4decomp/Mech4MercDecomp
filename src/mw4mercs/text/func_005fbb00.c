/*
 * FUN_005fbb00 (309 B) — __thiscall, RET 0x4. Weapon/mech rendering helper:
 * resolves a target position (3 floats) from a weapon/mech object, either via
 * a linked target list or a fallback object, writing the result to the
 * caller-provided 12-byte buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0041fd80(void);
extern float g_0076d064;

__declspec(naked) void FUN_005fbb00(void)
{
    __asm {
        sub     esp, 0x10
        push    esi
        push    edi
        mov     esi, ecx
        lea     eax, [esp+0x8]
        push    eax
        lea     ecx, [esi+0x384]
        mov     dword ptr [esp+0xc], 0x6
        call    FUN_00416b60
        test    eax, eax
        jz      L_bb4c
        mov     eax, dword ptr [eax+0x2c]
        test    eax, eax
        jz      L_bb4c
        mov     ecx, dword ptr [eax+0xd8]
        mov     esi, dword ptr [esp+0x1c]
        add     ecx, 0x80
        push    ecx
        mov     ecx, esi
        call    FUN_00419480
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0x10
        ret     0x4
L_bb4c:
        mov     edx, dword ptr [esi+0x410]
        mov     ecx, dword ptr [esi+0x40c]
        sub     edx, ecx
        sar     edx, 0x2
        jz      L_bbaa
        mov     eax, ecx
        cmp     dword ptr [eax], 0x0
        jz      L_bbaa
        mov     ecx, dword ptr [esi+0x410]
        mov     edi, eax
        sub     ecx, edi
        sar     ecx, 0x2
        jz      L_bb79
        mov     ecx, dword ptr [eax]
        jmp     L_bb7b
L_bb79:
        xor     ecx, ecx
L_bb7b:
        mov     edx, dword ptr [ecx+0x17c]
        test    edx, edx
        jz      L_bbaa
        mov     edx, dword ptr [esi+0x410]
        sub     edx, dword ptr [esi+0x40c]
        sar     edx, 0x2
        jz      L_bba0
        mov     eax, dword ptr [eax]
        mov     eax, dword ptr [eax+0x17c]
        jmp     L_bbc2
L_bba0:
        xor     eax, eax
        mov     eax, dword ptr [eax+0x17c]
        jmp     L_bbc2
L_bbaa:
        lea     edi, [esi+0x400]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_bbee
        mov     ecx, edi
        call    FUN_0041fd80
L_bbc2:
        mov     ecx, dword ptr [eax+0xd8]
        mov     edx, dword ptr [ecx+0x8c]
        mov     eax, dword ptr [esp+0x1c]
        add     ecx, 0x80
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx+0x1c]
        mov     ecx, dword ptr [ecx+0x2c]
        pop     edi
        mov     dword ptr [eax+0x4], edx
        mov     dword ptr [eax+0x8], ecx
        pop     esi
        add     esp, 0x10
        ret     0x4
L_bbee:
        mov     eax, dword ptr [esi+0xd8]
        mov     ecx, dword ptr [eax+0x9c]
        fld     dword ptr [eax+0xac]
        mov     edx, dword ptr [eax+0x8c]
        add     eax, 0x80
        mov     eax, dword ptr [esp+0x1c]
        mov     dword ptr [esp+0x10], ecx
        fld     dword ptr [esp+0x10]
        fadd    dword ptr [g_0076d064]
        mov     dword ptr [esp+0xc], edx
        fld     dword ptr [esp+0xc]
        pop     edi
        fstp    dword ptr [eax]
        pop     esi
        fstp    dword ptr [eax+0x4]
        fstp    dword ptr [eax+0x8]
        add     esp, 0x10
        ret     0x4
    }
}
