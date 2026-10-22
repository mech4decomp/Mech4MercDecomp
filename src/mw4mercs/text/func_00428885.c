/*
 * FUN_00428885 (extent 0x428885-0x428ab8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c08;
extern int    g_007b9648;
extern int    g_007b964c;
extern char   g_007da86c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_00491620(void);

__declspec(naked) void FUN_00428885(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        lea    eax, [ecx + 0x2c]
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        lea    eax, [ecx + 0x24]
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 4]
        lea    eax, [ecx + 0x2c]
        push    eax
        push    edx
        add    ecx, 0x24
        call    FUN_00491620
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x10]
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x44]
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        xor    eax, eax
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x11]
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x50]
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x58]
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        cmp    byte ptr [esp + 0x10], 1
        push    ebx
        mov    ebx, dword ptr [esp + 0x10]
        push    esi
        mov    esi, ecx
        push    edi
        mov    dword ptr [esp + 0xc], esi
        mov    dword ptr [esi + 0x58], ebx
        jne    L_89ed
        mov    edi, dword ptr [esi + 0x60]
        cmp    ebx, edi
        je    L_89ed
        push    ebp
        xor    ebp, ebp
        cmp    ebx, ebp
        jbe    L_89da
        mov    eax, ebx
        shl    eax, 4
        push    eax
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebp
        je    L_8979
        lea    ecx, [ebx - 1]
        mov    dword ptr [esp + 0x20], ecx
        mov    ebp, eax
L_8979:
        mov    esi, dword ptr [esi + 0x5c]
        test    esi, esi
        je    L_89c6
        cmp    ebx, edi
        mov    edx, ebx
        jb    L_8988
        mov    edx, edi
L_8988:
        mov    eax, edx
        dec    edx
        test    eax, eax
        je    L_89bd
        mov    ecx, edx
        shl    ecx, 4
        lea    eax, [ecx + esi]
        lea    ecx, [ecx + ebp + 8]
        inc    edx
L_899c:
        mov    edi, dword ptr [eax]
        mov    dword ptr [ecx - 8], edi
        mov    edi, dword ptr [eax + 4]
        mov    dword ptr [ecx - 4], edi
        mov    edi, dword ptr [eax + 8]
        mov    dword ptr [ecx], edi
        mov    edi, dword ptr [eax + 0xc]
        mov    dword ptr [ecx + 4], edi
        dec    edx
        sub    eax, 0x10
        sub    ecx, 0x10
        test    edx, edx
        ja    L_899c
L_89bd:
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_89c6:
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [ecx + 0x5c], ebp
        pop    ebp
        mov    esi, ecx
        pop    edi
        mov    dword ptr [esi + 0x60], ebx
        pop    esi
        pop    ebx
        pop    ecx
        ret    0xc
L_89da:
        mov    edx, dword ptr [esi + 0x5c]
        push    edx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [esi + 0x5c], ebp
        mov    dword ptr [esi + 0x60], ebx
        pop    ebp
L_89ed:
        pop    edi
        pop    esi
        pop    ebx
        pop    ecx
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx + 0x58]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [eax], 0
        mov    dword ptr [edx], ecx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x58]
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x70]
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_007da86c]
        test    al, 0x20
        jle    L_8a50
        mov    eax, dword ptr [ecx + 0x80]
        ret    
L_8a50:
        test    al, 0x40
        jle    L_8a5b
        mov    eax, dword ptr [ecx + 0x88]
        ret    
L_8a5b:
        xor    eax, eax
        ret    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x84]
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_8aa3
        mov    ecx, dword ptr [g_007b8c08]
        push    ecx
        push    0x76df5c
        push    0x76
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007b964c], eax
        mov    dword ptr [g_007b9648], 0
        ret    
L_8aa3:
        mov    dword ptr [g_007b964c], 0
        mov    dword ptr [g_007b9648], 0
        ret    
    }
}
