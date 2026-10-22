/*
 * FUN_007262e0 (extent 0x7262e0-0x726534) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2d0;
extern int    g_00856a80;
extern int    g_008aadc8;
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f4940(void);
extern void __cdecl FUN_006fc580(void);
extern void __cdecl FUN_00740db0(void);
extern void __cdecl FUN_00749510(void);
extern void __cdecl FUN_00758880(void);

__declspec(naked) void FUN_007262e0(void)
{
    __asm {
        push    ebx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 4]
        xor    ebx, ebx
        cmp    eax, ebx
        push    edi
        je    L_62f7
        push    eax
        call    FUN_006f4230
        mov    dword ptr [esi + 4], ebx
L_62f7:
        mov    eax, dword ptr [esi]
        cmp    eax, 6
        push    ebp
        ja    L_64bd
        jmp    dword ptr [eax*4 + 0x726534]
        mov    eax, dword ptr [esi + 0x20]
        cmp    eax, ebx
        je    L_631a
        push    eax
        call    FUN_006f4230
        mov    dword ptr [esi + 0x20], ebx
L_631a:
        cmp    dword ptr [esi + 0x58], ebx
        je    L_64bd
        mov    eax, dword ptr [esi + 0xd0]
        mov    ecx, dword ptr [g_008aadc8]
        push    1
        neg    eax
        push    eax
        push    ecx
        call    FUN_006f4940
        mov    eax, dword ptr [esi + 0xac]
        xor    edi, edi
        cmp    eax, ebx
        jbe    L_636c
        lea    ebp, [esi + 0x5c]
L_6349:
        cmp    byte ptr [esi + edi + 0x9c], bl
        jne    L_635e
        mov    edx, dword ptr [ebp]
        push    edx
        call    FUN_00740db0
        mov    dword ptr [ebp], ebx
L_635e:
        mov    eax, dword ptr [esi + 0xac]
        inc    edi
        add    ebp, 4
        cmp    edi, eax
        jb    L_6349
L_636c:
        mov    eax, dword ptr [esi + 0x58]
        push    eax
        call    FUN_00740db0
        mov    dword ptr [esi + 0x58], ebx
        jmp    L_64bd
        mov    eax, dword ptr [esi + 0x20]
        cmp    eax, ebx
        je    L_638d
        push    eax
        call    FUN_006f4230
        mov    dword ptr [esi + 0x20], ebx
L_638d:
        cmp    dword ptr [esi + 0x58], ebx
        je    L_64bd
        mov    ecx, dword ptr [esi + 0xd0]
        mov    edx, dword ptr [g_008aadc8]
        push    1
        neg    ecx
        push    ecx
        push    edx
        call    FUN_006f4940
        mov    eax, dword ptr [esi + 0xac]
        xor    edi, edi
        cmp    eax, ebx
        jbe    L_63df
        lea    ebp, [esi + 0x5c]
L_63bc:
        cmp    byte ptr [esi + edi + 0x9c], bl
        jne    L_63d1
        mov    eax, dword ptr [ebp]
        push    eax
        call    FUN_00740db0
        mov    dword ptr [ebp], ebx
L_63d1:
        mov    eax, dword ptr [esi + 0xac]
        inc    edi
        add    ebp, 4
        cmp    edi, eax
        jb    L_63bc
L_63df:
        mov    ecx, dword ptr [esi + 0x58]
        push    ecx
        call    FUN_00740db0
        mov    dword ptr [esi + 0x58], ebx
        jmp    L_64bd
        mov    eax, dword ptr [esi + 0x4c]
        cmp    eax, ebx
        je    L_6411
        push    ebx
        push    eax
        call    FUN_00758880
        mov    eax, dword ptr [esi + 0x50]
        cmp    eax, ebx
        mov    dword ptr [esi + 0x4c], ebx
        je    L_6411
        push    eax
        call    FUN_006f4230
        mov    dword ptr [esi + 0x50], ebx
L_6411:
        mov    eax, dword ptr [esi + 0x20]
        cmp    eax, ebx
        je    L_6421
        push    eax
        call    FUN_006f4230
        mov    dword ptr [esi + 0x20], ebx
L_6421:
        mov    edi, dword ptr [esi + 0xc4]
        cmp    edi, ebx
        je    L_64bd
        mov    eax, dword ptr [edi + 4]
        cmp    eax, ebx
        je    L_643f
        push    eax
        call    FUN_006f4230
        mov    dword ptr [edi + 4], ebx
L_643f:
        mov    eax, dword ptr [edi + 8]
        cmp    eax, ebx
        je    L_644f
        push    eax
        call    FUN_006f4230
        mov    dword ptr [edi + 8], ebx
L_644f:
        push    edi
        call    FUN_006f4230
        mov    dword ptr [esi + 0xc4], ebx
        jmp    L_64bd
        mov    eax, dword ptr [esi + 0x20]
        cmp    eax, ebx
        je    L_646d
        push    eax
        call    FUN_006f4230
        mov    dword ptr [esi + 0x20], ebx
L_646d:
        mov    eax, dword ptr [esi + 0xb4]
        cmp    eax, ebx
        je    L_6483
        push    eax
        call    FUN_006fc580
        mov    dword ptr [esi + 0xb4], ebx
L_6483:
        mov    eax, dword ptr [esi + 0x50]
        cmp    eax, ebx
        je    L_64bd
        push    eax
        call    FUN_006f4230
        mov    dword ptr [esi + 0x50], ebx
        jmp    L_64bd
        mov    eax, dword ptr [esi + 0xec]
        cmp    eax, ebx
        lea    edi, [esi + 0xec]
        je    L_64ad
        push    edi
        call    FUN_00749510
        mov    dword ptr [edi], ebx
L_64ad:
        mov    eax, dword ptr [esi + 0x20]
        cmp    eax, ebx
        je    L_64bd
        push    eax
        call    FUN_006f4230
        mov    dword ptr [esi + 0x20], ebx
L_64bd:
        mov    ecx, dword ptr [g_00856a80]
        mov    edi, dword ptr [ecx]
        cmp    edi, ebx
        pop    ebp
        je    L_652d
        cmp    dword ptr [edi + 0xc], esi
        jne    L_64ee
        mov    edx, dword ptr [edi + 4]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [ecx + 4]
        dec    edx
        mov    dword ptr [edi + 8], ebx
        push    edi
        mov    dword ptr [ecx + 4], edx
        mov    dword ptr [edi], ebx
        call    dword ptr [g_0076b2d0]
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebx
        ret    
L_64ee:
        mov    eax, dword ptr [edi + 4]
        cmp    eax, ebx
        je    L_652d
L_64f5:
        cmp    dword ptr [eax + 0xc], esi
        je    L_6507
        mov    edi, eax
        mov    eax, dword ptr [edi + 4]
        cmp    eax, ebx
        jne    L_64f5
        pop    edi
        pop    esi
        pop    ebx
        ret    
L_6507:
        mov    eax, dword ptr [edi + 4]
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [edi + 4], edx
        mov    edx, dword ptr [eax + 4]
        cmp    edx, ebx
        je    L_651a
        mov    dword ptr [edx + 8], edi
L_651a:
        mov    edx, dword ptr [ecx + 4]
        dec    edx
        push    eax
        mov    dword ptr [ecx + 4], edx
        call    dword ptr [g_0076b2d0]
        add    esp, 4
        mov    dword ptr [edi], ebx
L_652d:
        pop    edi
        pop    esi
        pop    ebx
        ret    
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x00726534 (7 relocated pointers)
        __emit 0x0A
        __emit 0x63
        __emit 0x72
        __emit 0x00
        __emit 0x7D
        __emit 0x63
        __emit 0x72
        __emit 0x00
        __emit 0xBD
        __emit 0x64
        __emit 0x72
        __emit 0x00
        __emit 0xF0
        __emit 0x63
        __emit 0x72
        __emit 0x00
        __emit 0x5D
        __emit 0x64
        __emit 0x72
        __emit 0x00
        __emit 0x95
        __emit 0x64
        __emit 0x72
        __emit 0x00
        __emit 0x5D
        __emit 0x64
        __emit 0x72
        __emit 0x00
    }
}
