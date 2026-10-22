/*
 * FUN_0071ebde (extent 0x71ebde-0x71ed05) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0ec;
extern char   g_007b70c8;
extern char   g_007b70cf;
extern int    g_007b70d0;
extern int    g_007b70d1;
extern int    g_007b70d4;
extern int    g_007b70d5;
extern int    g_007b70d8;
extern int    g_007b70d9;
extern char   g_0087d538;
extern char   g_0087d539;
extern int    g_0087d53a;
extern int    g_0087d53e;
extern int    g_0087d542;
extern char   g_0087d544;
extern int    g_0087dbdc;
extern int    g_0087dbe0;
extern int    g_0087dbe4;
extern int    g_0087dbe8;
extern int    g_0087dbec;

__declspec(naked) void FUN_0071ebde(void)
{
    __asm {
        nop    
        nop    
        mov    al, byte ptr [g_007b70c8]
        mov    cl, byte ptr [g_007b70cf]
        mov    byte ptr [g_0087d538], al
        mov    al, 0x20
        cmp    cl, al
        mov    byte ptr [g_0087d539], al
        jne    L_ec2c
        mov    ax, word ptr [g_007b70d8]
        mov    ecx, dword ptr [g_007b70d0]
        mov    edx, dword ptr [g_007b70d4]
        mov    word ptr [g_0087d542], ax
        mov    dword ptr [g_0087d53a], ecx
        mov    dword ptr [g_0087d53e], edx
        mov    byte ptr [g_0087d544], 0
        mov    eax, 0x87d538
        ret    
L_ec2c:
        mov    ax, word ptr [g_007b70d9]
        mov    ecx, dword ptr [g_007b70d1]
        mov    edx, dword ptr [g_007b70d5]
        mov    word ptr [g_0087d542], ax
        mov    dword ptr [g_0087d53a], ecx
        mov    dword ptr [g_0087d53e], edx
        mov    byte ptr [g_0087d544], 0
        mov    eax, 0x87d538
        ret    
        nop    
        nop    
        nop    
        sub    esp, 0x34
        push    ebx
        mov    ebx, dword ptr [esp + 0x3c]
        push    esi
        push    edi
        push    ebx
        push    1
        xor    esi, esi
        call    dword ptr [g_0087dbec]
        mov    edi, eax
        cmp    edi, -1
        jne    L_ec87
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        add    esp, 0x34
        ret    4
L_ec87:
        lea    eax, [esp + 0xc]
        push    eax
        push    edi
        mov    dword ptr [esp + 0x14], 0x10
        call    dword ptr [g_0087dbe8]
        test    eax, eax
        je    L_ecec
        push    ebp
        mov    ebp, 2
L_eca5:
        mov    ecx, dword ptr [esp + 0x18]
        push    ecx
        push    ebx
        lea    edx, [esp + 0x28]
        push    edx
        mov    dword ptr [esp + 0x2c], 0x24
        call    dword ptr [g_0087dbe0]
        test    eax, eax
        je    L_ecdb
L_ecc2:
        cmp    dword ptr [esp + 0x30], ebp
        je    L_eccc
        add    esi, dword ptr [esp + 0x2c]
L_eccc:
        lea    eax, [esp + 0x20]
        push    eax
        call    dword ptr [g_0087dbdc]
        test    eax, eax
        jne    L_ecc2
L_ecdb:
        lea    ecx, [esp + 0x10]
        push    ecx
        push    edi
        call    dword ptr [g_0087dbe4]
        test    eax, eax
        jne    L_eca5
        pop    ebp
L_ecec:
        push    edi
        call    dword ptr [g_0076b0ec]
        pop    edi
        lea    eax, [esi + 0x3ff]
        pop    esi
        shr    eax, 0xa
        pop    ebx
        add    esp, 0x34
        ret    4
    }
}
